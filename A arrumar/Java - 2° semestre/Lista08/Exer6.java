/* Matheus Henrique de Oliveira Querido */


	import java.util.Scanner;
	public class Exer6 {
	    public static void main(String[] args) {
	       int i = 0, d = 0;
	        Scanner leia = new Scanner(System.in);
	        do {
	            System.out.print("Digite o tamanho do vetor: ");
	            i = leia.nextInt();
	        } while (i > 15);
	        int a[] = new int[i];
	        int b[] = new int[i];

	        do{
	        System.out.print("Digite qual o valor do primeiro vetor vetor: ");
	        a[d] = leia.nextInt();
	        d++;
	        }while(d < i);
	        d = 0;

	        do{
	            System.out.print("Digite qual o valor do segundo vetor: ");
	            b[d] = leia.nextInt();
	            d++;
	            }while(d < i);
	            d = 0;

	            for(int j = 0; j < i; j++){
	                for(d = 0; d< i ; d++){
	            if(a[j] == b[d]){
	                System.out.print("\nPosição igual em : "+j+" e em "+d);
	            }
	            }
	        }



	        leia.close();
	    }
	}
