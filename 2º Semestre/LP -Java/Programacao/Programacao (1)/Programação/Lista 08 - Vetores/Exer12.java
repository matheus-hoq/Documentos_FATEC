/* Luis Gustavo Godoy Camargo */
import java.util.Scanner;
 
public class Exer12{
    public static void main(String[] args){
        int p[] = new int[10];
        int q[] = new int[15];
        int r[] = new int[25];
        int i = 0, j  = 0;
        Scanner leia = new Scanner(System.in);
        do{
            System.out.print("Digite valor de P: ");
            p[i] = leia.nextInt();
            i++;
        }while(i<10);
        i = 0;
        do{
            System.out.print("Digite valor de Q: ");
            q[i] = leia.nextInt();
            i++;
        }while(i<15);

     
        i = 0;
            do{
                System.out.println("\nValor lido de P na posição "+i+" :"+p[i]); 
                i++;
            }while(i<10);
           
            i = 0;
            do{
                System.out.println("Valor lido de Q na posição "+i+" :"+q[i]); 
                i++;
            }while(i<15);

            i = 0;
            do{
                r[i] = p[i];
                i++;
            }while(i<10);
            
            do{
                r[i] = q[j];
                i++;
                j++;
            }while(j<15);
            System.out.println("\n"); 
            i = 0;
            do{
                System.out.println("Valor lido de R na posição "+i+" :"+r[i]); 
                i++;
            }while(i<25);
       
        leia.close();
    }
}
