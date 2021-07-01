/* Luis Gustavo Godoy Camargo */
import java.util.Scanner;
 
public class Exer2 {
    public static void main(String[] args){
        int b[] = new int[15];
        int i = 0;
        Scanner leia = new Scanner(System.in);
        do{
            System.out.print("Digite: ");
            b[i] = leia.nextInt();
            i++;
        }while(i<15);
        do{
        i--;
        System.out.printf("Posição %d Núemro: %d",i,b[i]);
     }while(i>0);
       
        leia.close();
    }
}
