/* Matheus Henrique de Oliveira Querido */


	import java.util.Scanner;

	public class Exer9 {
	    public static void main(String[] args){
	        int g[] = new int[5];
	        int h[] = new int[5];
	        int i = 0, som = 0;
	        Scanner leia = new Scanner(System.in);
	        do{
	            System.out.print("Digite: ");
	            g[i] = leia.nextInt();
	            if(g[i]%2 == 0){
	            h[som] = g[i];
	            som++;
	            }
	            i++;
	        }while(i<5);
	        i = 0;
	        if(som == 0){
	        System.out.print("Sem nenhum valor par no vetor");
	        }else{
	            do{
	                System.out.println("Valor: "+h[i]);
	                i++;
	            }while(i<som);
	        }


	        leia.close();
	    }
	}
