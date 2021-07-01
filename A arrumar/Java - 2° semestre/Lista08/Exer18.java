/* Matheus Henrique de Oliveira Querido */


	import java.util.Scanner;

	public class Exer18 {
	    public static void main(String[] args) {
	        int n = 0,s = 0,a = 1;
	        Scanner leia = new Scanner(System.in);
	        do {
	            System.out.print("Digite valor do vetor: ");
	            n = leia.nextInt();
	        } while (n > 20);
	        int y[] = new int[n];

	        do{
	          for(int i = 1; i<s ; i++){
	          a *= i;
	          }
	        y[s] = a;
	        s++;
	        a = s;
	        }while(s<n);




	        for(int i = 0; i < n ; i++){
	            System.out.print(y[i]+" ");
	    }

	        leia.close();

	    }
	}
