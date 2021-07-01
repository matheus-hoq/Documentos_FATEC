/* Matheus Henrique de Oliveira Querido */


	import java.util.Scanner;

	public class Exer4 {
	    public static void main(String[] args) {
	        int a = 0 ,i = 0;
	        Scanner leia = new Scanner(System.in);
	        do {
	            System.out.print("Digite qual o valor do vetor: ");
	            i = leia.nextInt();
	        } while (i > 20);
	        int c[] = new int[i];

	        do {
	            System.out.print("Digite um número para a posição "+a+": ");
	            c[a] = leia.nextInt();
	            a++;
	        } while (a < i);
	        a = 0;
	        do {
	            System.out.printf("\nVetor %d Valor %d",a,c[a]);
	            a++;
	        } while (a < i);

	        leia.close();
	    }
	}
