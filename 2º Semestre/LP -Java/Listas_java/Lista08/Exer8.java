/* Matheus Henrique de Oliveira Querido */


	import java.util.Scanner;

	public class Exer8 {
	    public static void main(String[] args){
	        int f[] = new int[5];
	        int i = 0, som = 0;
	        Scanner leia = new Scanner(System.in);
	        do{
	            System.out.print("Digite: ");
	            f[i] = leia.nextInt();
	            if(f[i]%2 == 1){
	            som+=f[i];
	            }
	            i++;
	        }while(i<5);
	        if(som == 0){
	        System.out.print("Sem nenhum valor impar no vetor");
	        }else{
	            System.out.print("Valor da soma: "+som);
	        }


	        leia.close();
	    }
	}
