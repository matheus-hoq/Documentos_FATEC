/* Matheus Henrique de Oliveira Querido */


	import java.util.Random;

	public class Exer30 {
	    public static void main(String[] args){
	        Random gerador = new Random();
	        int n,m,h = 0,a = 0,b = 0,c = 0;

	        n = gerador.nextInt(7);
	        m = gerador.nextInt(7);
	        int w[][] = new int[n+1][m+1];
	        b = m;
	        for(int i = 0; i<n; i++){
	            for(int j = 0; j<m; j++){
	            w[i][j] = gerador.nextInt(100);
	            System.out.print(w[i][j]+" ");
	            }
	            System.out.println();
	        }
	        System.out.println("\n");

	        for(int i = 0; i<m; i++){
	            for(int j = 0; j<n; j++){
	            h +=w[j][i];
	            }
	            w[i][b] = h;
	            c+=h;
	            h = 0;
	        }
	        a = 0;

	        for(int i = 0; i<n; i++){
	            for(int j = 0; j<m; j++){
	            h +=w[i][j];
	            }
	            w[n][a] = h;
	            a++;
	            c+=h;
	            h = 0;
	        }

	        w[n][m] = c;
	        for(int i = 0; i<n+1; i++){
	            for(int j = 0; j<m+1; j++){
	            System.out.print(w[i][j]+" ");
	            }
	            System.out.println();
	        }
	    }
	}
