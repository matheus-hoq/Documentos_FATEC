/* Luis Gustavo Godoy Camargo */
import java.util.Scanner;

public class Exer21 {
    public static void main(String[] args){ 
        int ab[] = new int[10];
        int z[] = new int[10];
        int i = 0;
        Scanner leia = new Scanner(System.in);
        do{
            System.out.print("Digite: ");
            ab[i] = leia.nextInt();
            if(ab[i] % 2 == 1){
            z[i] = ab[i]*2;
            }
            i++;
        }while(i<10);
        for(i = 0; i<10;i++){
          if(z[i]!=0){
            System.out.println(z[i]);  
          }  
        }

        leia.close();
    }
}
