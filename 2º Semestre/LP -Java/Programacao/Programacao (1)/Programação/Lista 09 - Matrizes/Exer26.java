/* Luis Gustavo Godoy Camargo */
import java.util.Random;
import java.util.Arrays;
public class Exer26 {
    public static void main(String[] args){
        Random gerador = new Random();
        int n,m,h = 0;

        n = gerador.nextInt(20);
        m = gerador.nextInt(20);
        int x[][] = new int[n][m];
        int z[] = new int[n*m];

        for(int i = 0; i<n-1; i++){
            for(int j = 0; j<m-1; j++){
            x[i][j] = gerador.nextInt(100);
            System.out.print(x[i][j]+" ");
            z[h] = x[i][j];
            h++;
            }
            System.out.println();
        }

        System.out.println("\n");
        Arrays.sort(z);
        h = 0;
        
        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
            x[i][j] = z[h];
            System.out.print(x[i][j]+" ");
            h++;
            }
            System.out.println();
        }
      

    }
}
