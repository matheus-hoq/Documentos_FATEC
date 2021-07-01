/* Matheus Henrique de Oliveira Querido */


	import java.util.Random;
	public class Exer8 {
	    public static void main(String[] args){
	        Random gerador = new Random();
	        int n,m, c = 0, ca = 0;

	        n = gerador.nextInt(5);
	        m = gerador.nextInt(5);
	        int f[][] = new int[n][m];
	        int im[] = new int[n+m];
	        int pa[] = new int[n+m];

	        for(int i = 0; i<n; i++){
	            for(int j = 0; j<m; j++){
	            f[i][j] = gerador.nextInt(100);
	            if(f[i][j]% 2 == 0){
	            pa[c] = f[i][j];
	            c++;
	            }
	            else{
	            im[ca]= f[i][j];
	            ca++;
	            }
	            }
	        }



	        for(int i = 0; i<n; i++){
	            for(int j = 0; j<m; j++){
	            System.out.print(f[i][j]+ " " );
	            }
	            System.out.println();
	        }
	        System.out.print("Impar :  " );
	        for(int j = 0; j<=c; j++){
	            if(im[j] != 0){
	            System.out.print( im[j]+ " " );
	        }
	    }
	        System.out.print("\nPar :  " );
	        for(int j = 0; j<=ca; j++){
	            if(pa[j] != 0){
	            System.out.print( pa[j]+ " " );
	            }
	        }

	    }
	}
