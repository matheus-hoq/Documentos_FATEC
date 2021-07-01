/* Matheus Henrique de Oliveira Querido */


	import java.util.Random;
	import java.util.Arrays;
	import java.util.Collections;
	public class Exer24 {
	    public static void main(String[] args){
	        Random gerador = new Random();
	        int n,m,h = 0;

	        n = gerador.nextInt(5);
	        m = gerador.nextInt(5);
	        int w[][] = new int[n][m];
	        Integer z[] = new Integer[n*m];

	        for(int i = 0; i<n; i++){
	            for(int j = 0; j<m; j++){
	            w[i][j] = gerador.nextInt(100);
	            System.out.print(w[i][j]+" ");
	            z[h] = w[i][j];
	            h++;
	            }
	            System.out.println();
	        }

	        System.out.println("\n");
	        Arrays.sort(z, Collections.reverseOrder());
	        h = 0;
	        for(int i = 0; i<n; i++){
	            for(int j = 0; j<m; j++){
	            w[i][j] = z[h];
	            System.out.print(w[i][j]+" ");
	            h++;
	            }
	            System.out.println();
	        }


	    }
	}
