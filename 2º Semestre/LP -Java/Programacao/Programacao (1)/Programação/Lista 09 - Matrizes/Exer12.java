/* Luis Gustavo Godoy Camargo */
import java.util.Random;
public class Exer12 {
    public static void main(String[] args){
        Random gerador = new Random();
        int n;
        
        n = gerador.nextInt(10);

        int l[][] = new int[n][n];
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
            l[i][j] = gerador.nextInt(100);
            if(i < j){
             System.out.print(l[i][j]+",");   
            }
          
        }
        System.out.println("");
    }
  
        
    System.out.println("\n");


        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
            System.out.print(l[i][j]+ " " );
            }
            System.out.println();
        }
     
       
       
    }
}
