/* Matheus Henrique de Oliveira Querido */


	import java.util.Scanner;
	import java.util.Arrays;


	public class Exer23 {
	    public static void main(String[] args){
	        int n = 0,g = 0;
	        Scanner leia = new Scanner(System.in);

	            System.out.print("Digite o tamanho do array: ");
	            n = leia.nextInt();
	            int vetor[] = new int[n];

			int pares = 0;

			for ( int i = 0 ; i < vetor.length ; i++ ) {
				System.out.print("Entre com um elemento: ");
				vetor[i] = leia.nextInt();

				// verificar se o elemento eh par
				if ( vetor[i] % 2 == 0 ) {
					pares++;
				}
			}
			System.out.println();

			// tem elementos pares???
			if ( pares > 0 ) {

				int ad[] = new int[ n ];

				int posicaoNoVetorDePares = 0;

				for ( int i = 0 ; i < vetor.length ; i++ ) {
					if ( vetor[i] % 2 == 0 ) {
						ad[ posicaoNoVetorDePares ] = vetor[i];
						posicaoNoVetorDePares++;
	                }
				}

	            for ( int i = posicaoNoVetorDePares ; i < vetor.length ; i++ ) {
					if ( vetor[i] % 2 == 1 ) {
						ad[ posicaoNoVetorDePares ] = vetor[i];
						posicaoNoVetorDePares++;
	                }
				}

				System.out.print("Vetor de pares: ");
				for ( int i = 0 ; i < vetor.length ; i++ ) {
					System.out.print( ad[i] + " " );
			}
	    }



	        leia.close();
	    }
	}
