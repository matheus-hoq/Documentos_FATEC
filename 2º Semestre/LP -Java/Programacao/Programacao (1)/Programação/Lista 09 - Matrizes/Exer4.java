/* Luis Gustavo Godoy Camargo */
import java.util.Random;
import java.util.Scanner;
public class Exer4 {
    public static void main(String[] args){
        Random gerador = new Random();
        Scanner leia = new Scanner(System.in);
        int n,m;
        do{
        System.out.print("Digite total de linhas: ");
        n = leia.nextInt();
        System.out.print("Digite total de colunas: ");
        m = leia.nextInt();
        }while(n<1);
        System.out.print("Digite o número aleatorio maximo: ");
        int na = leia.nextInt();
        int d[][] = new int[n][m];
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
            d[i][j] = gerador.nextInt(na);
            }
        }
     
       

        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
            System.out.print(d[i][j]+ " " );
            }
            System.out.println();
        }
       
       leia.close();
    }
}
