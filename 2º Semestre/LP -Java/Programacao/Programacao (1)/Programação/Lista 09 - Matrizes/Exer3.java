/* Luis Gustavo Godoy Camargo */
import java.util.Random;
import java.util.Scanner;
public class Exer3 {
    public static void main(String[] args){
        Random gerador = new Random();
        Scanner leia = new Scanner(System.in);
        int n;
        do{
        System.out.print("Digite: ");
        n = leia.nextInt();
        }while(n>20);
        int c[][] = new int[n][n];
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
            c[i][j] = gerador.nextInt(100);
            }
        }
     
       

        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
            System.out.print(c[i][j]+ " " );
            }
            System.out.println();
        }
       
       leia.close();
    }
}
