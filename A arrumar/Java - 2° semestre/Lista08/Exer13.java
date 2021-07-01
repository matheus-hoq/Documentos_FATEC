/* Matheus Henrique de Oliveira Querido */


	import java.util.Scanner;

	public class Exer13{
	    public static void main(String[] args){

	        int n = 0,m = 0, i = 0, j = 0;
	        Scanner leia = new Scanner(System.in);
	        do{
	            System.out.print("Digite valor de N: ");
	            n = leia.nextInt();
	        }while(n>10);
	        do{
	            System.out.print("Digite valor de M: ");
	            m = leia.nextInt();
	        }while(m>15);

	        int p[] = new int[n];
	        int q[] = new int[m];
	        int r[] = new int[n+m];

	        for(i =0; i<n;i++){
	            System.out.printf("Digite valor de P na posição %d: ",i);
	            p[i] = leia.nextInt();
	        }
	        for(i =0; i<m;i++){
	            System.out.printf("Digite valor de Q na posição %d: ",i);
	            q[i] = leia.nextInt();
	        }
	        for(i = 0; i<n;i++){
	            r[j] = p[i];
	            j++;
	        }
	        for(i = 0; i<m;i++){
	            r[j] = q[i];
	            j++;
	        }

	        for(i = 0; i<m+n;i++){
	            System.out.printf("\nValor de R na posição %d: %d",i,r[i]);
	        }
	        leia.close();
	    }
	}
