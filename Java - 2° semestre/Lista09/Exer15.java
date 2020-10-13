/* Matheus Henrique de Oliveira Querido */


	import java.util.Random;
	public class Exer15 {
	    public static void main(String[] args){
	        Random gerador = new Random();
	        int n;

	        n = gerador.nextInt(10);

	        int o[][] = new int[n][n];
	        for(int i = 0; i<n; i++){
	            for(int j = 0; j<n; j++){
	            o[i][j] = gerador.nextInt(100);
	            if(n >= i+j+1){
	             System.out.print(o[i][j]+" ");
	            }
	            }
	            System.out.println();
	        }
	        System.out.println();


	        int k[][] = new int[n][n];
	        for(int i = 0; i<n; i++){
	            for(int j = 0; j<n; j++){
	            if(i >= j){
	             System.out.print(k[i][j]+",");
	            }

	        }
	        System.out.println("");
	    }

	    System.out.println();

	        for(int i = 0; i<n; i++){
	            for(int j = 0; j<n; j++){
	            System.out.print(o[i][j]+ " " );
	            }
	            System.out.println();
	        }



	    }
	}
