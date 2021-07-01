/* Matheus Henrique de Oliveira Querido */


	import java.util.Random;
	import java.util.Scanner;
	public class Exer7 {
	    public static void main(String[] args){
	        Random gerador = new Random();
	        Scanner leia = new Scanner(System.in);
	        int n,m;
	        int ma = 0, me = 1000;
	        System.out.print("Digite total de linhas: ");
	        n = leia.nextInt();
	        System.out.print("Digite total de colunas: ");
	        m = leia.nextInt();

	        int e[][] = new int[n][m];
	        for(int i = 0; i<n; i++){
	            for(int j = 0; j<m; j++){
	            e[i][j] = gerador.nextInt(100);
	            if(e[i][j] > ma){ma = e[i][j];}
	            else if(e[i][j]<me){me = e[i][j];}
	            }
	        }

	        System.out.println("Maior valor gerado: "+ma+"\nMenor valor gerado: "+me);
	        System.out.println("");

	        for(int i = 0; i<n; i++){
	            for(int j = 0; j<m; j++){
	            if(e[i][j] == ma){System.out.println("Posição do maior: "+i+" x "+j);}
	            else if(e[i][j] == me){System.out.println("Posição do menor: "+i+" x "+j);}
	            }
	            }
	            for(int i = 0; i<n; i++){
	                for(int j = 0; j<m; j++){
	                    System.out.print(e[i][j]+ " " );
	                }
	                System.out.println(" " );
	            }

	       leia.close();
	    }
	}
