/* Matheus Henrique de Oliveira Querido */


	import java.util.Random;
	public class Exer10 {
	    public static void main(String[] args){
	        Random gerador = new Random();
	        int n;

	        n = gerador.nextInt(10);

	        int h[][] = new int[n][n];
	        for(int i = 0; i<n; i++){
	            for(int j = 0; j<n; j++){
	            h[i][j] = gerador.nextInt(100);
	            if(i+j == n+1){
	             System.out.print(h[i][j]+" ");
	            }
	            }

	        }
	        System.out.println();
	        System.out.println();

	        for(int i = 0; i<n; i++){
	            for(int j = 0; j<n; j++){
	            System.out.print(h[i][j]+ " " );
	            }
	            System.out.println();
	        }



	    }
	}
