/* Matheus Henrique de Oliveira Querido */


	import java.util.Random;
	public class Exer1 {
	    public static void main(String[] args){
	        Random gerador = new Random();
	        int a[][] = new int[4][5];
	        for(int i = 0; i<4; i++){
	            for(int j = 0; j<5; j++){
	            a[i][j] = gerador.nextInt(100);
	            }
	        }



	        for(int i = 0; i<4; i++){
	            for(int j = 0; j<5; j++){
	            System.out.print(a[i][j]+ " " );
	            }
	            System.out.println();
	        }


	    }
	}
