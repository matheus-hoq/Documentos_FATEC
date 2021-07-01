/* Matheus Henrique de Oliveira Querido */


	import java.util.Random;
	import java.util.Scanner;

	public class Exer29 {
	    public static void main(String[] args){
	        Random gerador = new Random();
	        Scanner leia = new Scanner(System.in);

	        int n,m,a;

	        n = gerador.nextInt(10);
	        m = gerador.nextInt(10);
	        int x[][] = new int[n][m];
	        System.out.print("Digite o valor minimo: ");
	        int mi = leia.nextInt();
	        System.out.print("Digite o valor maximo: ");
	       int  ma = leia.nextInt();

	        for(int i = 0; i<n; i++){
	            for(int j = 0; j<m; j++){
	            do{
	            a = gerador.nextInt(ma);
	            }while(a<mi && a >ma);
	            x[i][j] = a;
	            System.out.print(x[i][j]+" ");

	            }
	            System.out.println();
	        }

	        System.out.println("\n");
	        for(int i = 0; i<n; i++){
	            for(int j = 0; j<m; j++){
	            System.out.print(x[i][j]+" ");
	            }
	            System.out.println();
	        }
	      leia.close();

	    }
	}
