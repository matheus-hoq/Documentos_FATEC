/* Luis Gustavo Godoy Camargo */
import java.util.Random;
import java.util.Scanner;
public class Exer5 {
    public static void main(String[] args){
        Random gerador = new Random();
        Scanner leia = new Scanner(System.in);
        int a,b;
        
        System.out.print("Digite total de linhas: ");
        a = leia.nextInt();
        System.out.print("Digite total de colunas: ");
        b = leia.nextInt();

        int n[][] = new int[a][b];
        int m[][] = new int[a][b];

        int o[][] = new int[a][b];

        for(int i = 0; i<a; i++){
            for(int j = 0; j<b; j++){
            n[i][j] = gerador.nextInt(100);
            m[i][j] = gerador.nextInt(100);
            }
        }
     
        for(int i = 0; i<a; i++){
            for(int j = 0; j<b; j++){
             o[i][j] = n[i][j] * m[i][j];
            }
        }


        for(int i = 0; i<a; i++){
            for(int j = 0; j<b; j++){
            System.out.print(n[i][j]+ " " );
            }
            System.out.println();
        }
        System.out.println();

        for(int i = 0; i<a; i++){
            for(int j = 0; j<b; j++){
            System.out.print(m[i][j]+ " " );
            }
            System.out.println();
        }

        
        System.out.println();

        for(int i = 0; i<a; i++){
            for(int j = 0; j<b; j++){
            System.out.print(o[i][j]+ " " );
            }
            System.out.println();
        }
       
       leia.close();
    }
}
