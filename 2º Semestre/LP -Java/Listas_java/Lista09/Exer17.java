/* Matheus Henrique de Oliveira Querido */


	import java.util.Random;
	public class Exer17 {
	    public static void main(String[] args){
	        Random gerador = new Random();
	        int n;

	        n = gerador.nextInt(10);

	        int q[][] = new int[n][n];
	        for(int i = 0; i<n-1; i++){
	            for(int j = 1; j<n; j++){
	            q[i][j] = gerador.nextInt(100);
	            if(i <= j){
	             System.out.print(q[i][j]+" ");
	            }
	            }
	            System.out.println();
	        }
	        System.out.println();


	        for(int i = 0; i<n; i++){
	            for(int j = 0; j<n; j++){
	            System.out.print(q[i][j]+ " " );
	            }
	            System.out.println();
	        }



	    }
	}
