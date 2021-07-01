/* Matheus Henrique de Oliveira Querido */


	import java.util.Scanner;
	import java.util.Random;
	public class Exer5 {
	    public static void main(String[] args) {
	       int i = 0, d = 0;
	        Scanner leia = new Scanner(System.in);
	        Random r = new Random();
	        do {
	            System.out.print("Digite qual o valor do vetor: ");
	            i = leia.nextInt();
	        } while (i > 15);
	        int a[] = new int[i];
	        int b[] = new int[i];
	        int c[] = new int[i];


	        do {
	            a[d] = r.nextInt(100);
	            d++;
	        } while (d < i);
	        d = 0;

	        do {
	            b[d] = r.nextInt(100);
	            d++;
	        } while (d < i);
	        d = 0;

	        do {
	            c[d] = a[d]+b[d];
	            d++;
	        } while (d < i);
	        d = 0;

	        do {
	            System.out.printf("\n %d + %d = %d",a[d],b[d],c[d]);
	           d++;
	        } while (d < i);

	        leia.close();
	    }
	}
