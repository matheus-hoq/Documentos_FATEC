/* Matheus Henrique de Oliveira Querido */


	import java.util.Scanner;


	public class Exer25 {
	    public static void main(String[] args){
	        int n = 0, ni = 0 , np =0;
	        Scanner leia = new Scanner(System.in);

	            System.out.print("Digite o tamanho do array: ");
	            n = leia.nextInt();
	            int af[] = new int[n];
			for ( int i = 0 ; i < af.length ; i++ ) {
				System.out.print("Entre com um elemento: ");
	            af[i] = leia.nextInt();
	            if(af[i] % 2 == 0){np++;}
	            else{ni++;}
			}
	        System.out.println();

	        for (int i = af.length; i >= 0; i--) {
	            if(af[i]%2 == 0){
	            for (int j = af.length; j >= 0; j--) {
	                if (af[i] > af[j]) {
	                    int temp = af[i];
	                    af[i] = af[j];
	                    af[j] = temp;
	                }
	            }
	        }
	    }








				System.out.print("Vetor de pares: ");
				for ( int i = 0 ; i < af.length ; i++ ) {
					System.out.print( af[i] + " " );
			}




	        leia.close();
	    }
	}
