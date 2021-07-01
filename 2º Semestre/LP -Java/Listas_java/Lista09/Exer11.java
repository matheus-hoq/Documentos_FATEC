/* Matheus Henrique de Oliveira Querido */


	import java.util.Random;
	public class Exer11 {
	    public static void main(String[] args){
	        Random gerador = new Random();
	        int n;

	        n = gerador.nextInt(10);

	        int k[][] = new int[n][n];
	        for(int i = 0; i<n; i++){
	            for(int j = 0; j<n; j++){
	            k[i][j] = gerador.nextInt(100);
	            if(i >= j){
	             System.out.print(k[i][j]+",");
	            }

	        }
	        System.out.println("");
	    }


	    System.out.println("\n");

	    }
	}
