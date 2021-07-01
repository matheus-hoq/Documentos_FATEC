/* Luis Gustavo Godoy Camargo */
import java.util.Scanner;
 
public class Exer10 {
    public static void main(String[] args){
        int pa[] = new int[5];
        int pb[] = new int[5];
        int pc[] = new int[10];
        int i = 0, j  = 5;
        Scanner leia = new Scanner(System.in);
        do{
            System.out.print("Digite valor de PA: ");
            pa[i] = leia.nextInt();
            System.out.print("Digite valor de PB: ");
            pb[i] = leia.nextInt();
            i++;
        }while(i<5);
        i = 0;
            do{
                System.out.println("\nValor lido de PA na posição "+i+" :"+pa[i]); 
                System.out.println("Valor lido de PB na posição "+i+" :"+pb[i]); 
                i++;
            }while(i<5);
           
            i = 0;
            do{
                pc[i] = pa[i];
                i++;
            }while(i<5);
            i = 0;

            do{
                pc[j] = pb[i];
                i++;
                j++;
            }while(i<5);

            i = 0;
            do{
                System.out.println("Valor lido de PC na posição "+i+" :"+pc[i]); 
                i++;
            }while(i<10);
       
        leia.close();
    }
}
