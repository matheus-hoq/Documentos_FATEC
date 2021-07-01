/* Matheus Henrique de Oliveira Querido */


	import java.util.Random;

	public class Ex10 {

	    public static void main(String[] args){

		        Random gerador = new Random();
		        int n = gerador.nextInt(10);
		        int matriz[][] = new int[1][n];

		        for(int i = 0; i<1; i++){
		            for(int j = 0; j<n; j++){
		            matriz[i][j] = gerador.nextInt(100);
		            System.out.print(matriz[i][j]+ " " );
		            }
		        }
		        System.out.println();
		        int aux = 0;

				for(int linha = 0; linha < matriz.length; linha++) {

					for(int coluna = 0; coluna < matriz[linha].length; coluna++) {

						int col = coluna;

						for(int i = linha; i < matriz.length; i++) {

							for(int j = col+1; j < matriz[i].length; j++) {

								if (  matriz[linha][coluna] > matriz[i][j] ){

									aux = matriz[linha][coluna];
									matriz[linha][coluna] = matriz[i][j];
									matriz[i][j] = aux;

								}

							}

							col = -1;

						}

					}

				}


		        for(int i = 0; i<1; i++){
		            for(int j = 0; j<n; j++){
		            System.out.print(matriz[i][j]+ " " );
		            }
		            System.out.println();
		}


	}
}