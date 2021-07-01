/* Luis Gustavo Godoy Camargo */
import java.util.Random;
public class Exer2 {
    public static void main(String[] args){
        Random gerador = new Random();
        int b[][] = new int[6][3];
        for(int i = 0; i<6; i++){
            for(int j = 0; j<3; j++){
            b[i][j] = gerador.nextInt(100);
            }
        }
     
       

        for(int i = 0; i<6; i++){
            for(int j = 0; j<3; j++){
            System.out.print(b[i][j]+ " " );
            }
            System.out.println();
        }
        System.out.println();


        for(int i = 6 - 1; i>=0; i--){
            for(int j = 3 - 1; j>=0; j--){
            System.out.print(b[i][j]+ " " );
            }
            System.out.println();
        }
       
    }
}
