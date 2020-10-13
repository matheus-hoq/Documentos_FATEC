/* Matheus Henrique de Oliveira Querido */


	import java.util.Random;
	public class Exer19 {
	    public static void main(String[] args){
	        Random gerador = new Random();
	        int n,m,p;

	        n = 3;
	        m = 3;
	        p = 3;

	        int a[][] = new int[n][m];
	        int b[][] = new int[n][p];
	        String c[][] = new String[n][m+p];
	        for(int i = 0; i<n; i++){
	            for(int j = 0; j<m; j++){
	            a[i][j] = gerador.nextInt(100);
	            }
	    }

	    for(int i = 0; i<n; i++){
	        for(int j = 0; j<p; j++){
	        b[i][j] = gerador.nextInt(100);
	        }
	}

	for(int i = 0; i<n; i++){
	    for(int j = 0; j<n+p; j++){
	    c[i][j] = a[i][j] +""+ b[i][j];

	    }
	}

	for(int i = 0; i<n; i++){
	    for(int j = 0; j<m; j++){
	    System.out.print(a[i][j]+" ");
	    }
	    System.out.println("");
	}
	    System.out.println("\n");
	    for(int i = 0; i<n; i++){
	        for(int j = 0; j<p; j++){
	        System.out.print(b[i][j]+" ");
	        }
	        System.out.println("");
	    }
	        System.out.println("\n");

	        for(int i = 0; i<n; i++){
	            for(int j = 0; j<p; j++){
	            System.out.print(c[i][j]+" ");
	            }
	            System.out.println("");
	        }
	            System.out.println("\n");




	    }
	}
