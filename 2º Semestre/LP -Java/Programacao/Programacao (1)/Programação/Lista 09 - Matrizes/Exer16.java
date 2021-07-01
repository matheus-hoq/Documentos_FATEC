/* Luis Gustavo Godoy Camargo */
import java.util.Random;
public class Exer16 {
    public static void main(String[] args){
        Random gerador = new Random();
        int n;
        
        n = gerador.nextInt(10);

        int p[][] = new int[n][n];
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
            p[i][j] = gerador.nextInt(100);
            if(n >= i+j+1){
             System.out.print(p[i][j]+" ");   
            }
            }
            System.out.println();
        }
        System.out.println();

        
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
            if(n <= i+j+1){
             System.out.print(p[i][j]+" ");   
            }
            }
            System.out.println();
        }

    System.out.println();

        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
            System.out.print(p[i][j]+ " " );
            }
            System.out.println();
        }
     
       
       
    }
}
