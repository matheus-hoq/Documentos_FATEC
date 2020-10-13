/* Matheus Henrique de Oliveira Querido */


	import java.util.Scanner;
	public class Exer22 {
	    public static void main(String[] args){
	        Scanner leia = new Scanner(System.in);
	        int n,m;
	        int n1 = 0, n2 = 1, n3;
	        System.out.print("Digite total de linhas: ");
	        n = leia.nextInt();
	        System.out.print("Digite total de colunas: ");
	        m = leia.nextInt();

	        int e[][] = new int[n][m];
	        for(int i = 0; i<n; i++){
	            for(int j = 0; j<m; j++){
	                n3 = n1 + n2;
	                e[i][j] = n3;
	                n1 = n2;
	                n2 = n3;
	            }
	        }


	        for(int i = 0; i<n; i++){
	            for(int j = 0; j<m; j++){
	                System.out.print( e[i][j] +" ");
	            }
	            System.out.println();

	        }


	       leia.close();
	    }
	}
