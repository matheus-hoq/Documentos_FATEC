/* Luis Gustavo Godoy Camargo */
import java.util.Scanner;
 
public class Exer14 {
    public static void main(String[] args){
        int s[] = new int[10];
        int t[] = new int[15];
        int u[] = new int[25];
        int i = 0, j  = 0;
        Scanner leia = new Scanner(System.in);
        do{
            System.out.print("Digite valor de S: ");
            s[i] = leia.nextInt();
            i++;
        }while(i<10);
        i = 0;
        do{
            System.out.print("Digite valor de T: ");
            t[i] = leia.nextInt();
            i++;
        }while(i<15);
        i = 0;

            do{
                System.out.println("\nValor lido de S na posição "+i+" :"+s[i]);  
                i++;
            }while(i<10);
            i = 0;
            do{
                System.out.println("Valor lido de T na posição "+i+" :"+t[i]); 
                i++;
            }while(i<15);

            for(i = 0; i<10 ;i++){
                u[j] = s[i];
                j+=2; 
               }
               j = 1;
               for(i = 0; i<12 ;i++){
                u[j] = t[i];
                j+=2; 
               }

               j = 20;
               for(i = 12; i<15 ;i++){
                u[j] = t[i];
                j+=2; 
               }
            System.out.println("\n"); 

           for(i = 0; i < 25 ; i++){
            System.out.println("Valor concatenado de U na posição "+i+" :"+u[i]); 
           }
           
            leia.close();   
       
    }
}
