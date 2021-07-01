/* Luis Gustavo Godoy Camargo */
import java.util.Scanner;
 
public class Exer27 {
    public static void main(String[] args){
        int i = 0, n = 0;
        Scanner leia = new Scanner(System.in);
        do{
            System.out.print("Digite o valor do vetor AH: ");
            i = leia.nextInt();
            System.out.print("Digite o valor do vetor AI: ");
            n = leia.nextInt();
        }while(i<25 && n<=2 && n<=5);
        int ah[] = new int[i];
        int ai[] = new int[n];
        for ( int c = 0 ; c < i ; c++ ) {
            for ( int j = 0 ; j < n ; j++ ) {
            
            }
        }
        leia.close();
    }
}
