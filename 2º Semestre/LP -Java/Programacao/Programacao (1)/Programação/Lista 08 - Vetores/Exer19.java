/* Luis Gustavo Godoy Camargo */
import java.util.Scanner;
import java.util.Arrays;

public class Exer19 {
    public static void main(String[] args){ 
        int z[] = new int[10];
        int i = 0;
        Scanner leia = new Scanner(System.in);
        do{
            System.out.print("Digite: ");
            z[i] = leia.nextInt();
            i++;
        }while(i<10);
        Arrays.sort(z);
        for(i = 0 ; i<10; i++){
        System.out.print(z[i]+" , ");
        }

        leia.close();
    }
}
