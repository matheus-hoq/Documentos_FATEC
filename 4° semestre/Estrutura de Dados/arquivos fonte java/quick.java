/*Matheus Henrique de Oliveira Querido*/

import java.util.*;
public class quick {

    public static int[] QuickSort(int[] arr, int emts){
        if(emts < 2){
            return arr;
        }
        int posicao_atual = 0;
        int temp;
        for(int i = 1; i < emts; i++){
            if(arr[i] <= arr[0]){
                posicao_atual++;
                temp = arr[i];
                arr[i] = arr[posicao_atual];
                arr[posicao_atual] = temp;
            }
        }
        temp = arr[0];
        arr[0] = arr[posicao_atual];
        arr[posicao_atual] = temp;


    int[] left = QuickSort(arr, posicao_atual);

    int[] arr2 = Arrays.copyOfRange(arr, posicao_atual+1, emts);

    int[] right = QuickSort(arr2, emts-posicao_atual-1);

    int[] final_array = new int[emts];

    for(int i=0; i<posicao_atual; i++){
        final_array[i] = left[i];
    }
    final_array[posicao_atual] = arr[posicao_atual];
    for(int i=posicao_atual+1; i<emts; i++){
        final_array[i] = right[i-posicao_atual-1];
    }
    return final_array;
    }
    public static void main ( String args[] ) {
        int[] array = {4,2,7,3,1,6};
        System.out.print("Array original: [");
        for (int i=0; i<array.length;i++){
            System.out.print(array[i]);
            System.out.print(" ");
    }
        System.out.println("]");
        array = QuickSort(array, array.length);

        System.out.print("Array classificado: [");
        for(int i=0; i<array.length; i++){
            System.out.print(array[i]);
            System.out.print(" ");
        }
        System.out.print("]");
    }
    }
