/* Luis Gustavo Godoy Camargo */
import java.util.Scanner;
 
public class Exer11 {
    public static void main(String[] args){
        int qa[] = new int[5];
        int qb[] = new int[5];
        int qc[] = new int[10];
        int i = 0, j  = 0;
        Scanner leia = new Scanner(System.in);
        leia.close();   
        do{
            System.out.print("Digite valor de PA: ");
            qa[i] = leia.nextInt();
            System.out.print("Digite valor de PB: ");
            qb[i] = leia.nextInt();
            i++;
        }while(i<5);
        i = 0;
            do{
                System.out.println("\nValor lido de PA na posição "+i+" :"+qa[i]); 
                System.out.println("Valor lido de PB na posição "+i+" :"+qb[i]); 
                i++;
            }while(i<5);
           
           for(i = 0; i<5 ;i++){
            qc[j] = qa[i];
            j+=2; 
           }
           j = 1;
           for(i = 0; i<5 ;i++){
            qc[j] = qb[i];
            j+=2; 
           }
            System.out.println("\n"); 

            i = 0;
            do{
                System.out.println("Valor lido de PC na posição "+i+" :"+qc[i]); 
                i++;
            }while(i<10);
       
    }
}
