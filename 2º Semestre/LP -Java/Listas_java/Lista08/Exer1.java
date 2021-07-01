/* Matheus Henrique de Oliveira Querido */


	import java.util.Scanner;

	public class Exer1 {
	    public static void main(String[] args){
	        int a[] = new int[15];
	        int i = 0;
	        Scanner leia = new Scanner(System.in);
	        do{
	            System.out.print("Digite: ");
	            a[i] = leia.nextInt();
	            i++;
	        }while(i<15);
	        for ( int c = 0 ; c < 16 ; c++ ) {
	            System.out.printf("\nPosição %d Núemro: %d\n",c,a[c]);
	           }

	        leia.close();
	    }
	}
