/* Luis Gustavo Godoy Camargo */
import java.util.Scanner;
import java.util.Arrays;
import java.util.Collections; 

public class Exer20 {
    public static void main(String[] args){ 
        Integer aa[] = new Integer[10];
        Integer z[] = new Integer[10];
        int i = 0;
        Scanner leia = new Scanner(System.in);
        do{
            System.out.print("Digite: ");
            aa[i] = leia.nextInt();
            z[i] = aa[i];
            i++;
        }while(i<10);
        Arrays.sort(aa, Collections.reverseOrder());
        i = 0;
       do{
        System.out.print(aa[i]+" , ");
        i++;
        }while(i<10);
        Arrays.sort(z);
        i = 0;
        do{
         System.out.print(z[i]+" , ");
         i++;
         }while(i<10);
        leia.close();
    }
}
