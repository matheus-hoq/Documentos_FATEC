/*Matheus Henrique de Oliveira Querido*/

import java.util.Arrays; 

public class array{
    public static void main(String args[]){
        long tmpIni = System.currentTimeMillis();
        arraySort();
        long tmpFim = System.currentTimeMillis();
        System.out.println("\n\nTempo de execução: " + (tmpFim - tmpIni) + " ms");
    }


    public static void  arraySort() {
        int [] arr = {5, -2, 23, 7, 87, -42, 509};
        System.out.println("Array original: ");
        for (int num: arr) {
          System.out.print(num + " ");
        }
        Arrays.sort(arr);
        System.out.println("\nArray ordenado: ");
        for (int num: arr) {
          System.out.print(num + " ");
        }
    }
}
