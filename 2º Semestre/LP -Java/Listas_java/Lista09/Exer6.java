/* Matheus Henrique de Oliveira Querido */


	import java.util.Random;
	import java.util.Scanner;
	public class Exer6 {
	    public static void main(String[] args){
	        Random gerador = new Random();
	        Scanner leia = new Scanner(System.in);
	        int n,m, c = 0;

	        System.out.print("Digite total de linhas: ");
	        n = leia.nextInt();
	        System.out.print("Digite total de colunas: ");
	        m = leia.nextInt();
	        int d[][] = new int[n][m];
	        System.out.print("Digite o número a ser verificado: ");
	        int ne = leia.nextInt();

	        for(int i = 0; i<n; i++){
	            for(int j = 0; j<m; j++){
	            d[i][j] = gerador.nextInt(25);
	            if(d[i][j] == ne){
	                System.out.println("Número escolhido na posição encontrada: "+i+" x "+j);
	               c++;
	            }
	            }
	        }



	        for(int i = 0; i<n; i++){
	            for(int j = 0; j<m; j++){
	            System.out.print(d[i][j]+ " " );
	            }
	            System.out.println();
	        }
	        System.out.println("Quantidade de ocorrências: "+c);
	       leia.close();
	    }
	}
