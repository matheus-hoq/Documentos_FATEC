/* Matheus Henrique de Oliveira Querido */


	import java.util.Random;
	import java.util.Arrays;
	public class Exer23 {
	    public static void main(String[] args){
	        Random gerador = new Random();
	        int n,m,h = 0;

	        n = gerador.nextInt(5);
	        m = gerador.nextInt(5);
	        int y[][] = new int[n][m];
	        int z[] = new int[n*m];

	        for(int i = 0; i<n; i++){
	            for(int j = 0; j<m; j++){
	            y[i][j] = gerador.nextInt(100);
	            System.out.print(y[i][j]+" ");
	            z[h] = y[i][j];
	            h++;
	            }
	            System.out.println();
	        }

	        System.out.println("\n");
	        Arrays.sort(z);
	        h = 0;
	        for(int i = 0; i<n; i++){
	            for(int j = 0; j<m; j++){
	            y[i][j] = z[h];
	            System.out.print(y[i][j]+" ");
	            h++;
	            }
	            System.out.println();
	        }


	    }
	}
