/* Matheus Henrique de Oliveira Querido */


	import java.util.Random;
	public class Exer9 {
	    public static void main(String[] args){
	        Random gerador = new Random();
	        int n;

	        n = gerador.nextInt(10);

	        int g[][] = new int[n][n];
	        for(int i = 0; i<n; i++){
	            for(int j = 0; j<n; j++){
	            g[i][j] = gerador.nextInt(100);
	            if(i == j){
	             System.out.print(g[i][j]+" ");
	            }
	            }
	        }
	        System.out.println();

	        for(int i = 0; i<n; i++){
	            for(int j = 0; j<n; j++){
	            System.out.print(g[i][j]+ " " );
	            }
	            System.out.println();
	        }



	    }
	}
