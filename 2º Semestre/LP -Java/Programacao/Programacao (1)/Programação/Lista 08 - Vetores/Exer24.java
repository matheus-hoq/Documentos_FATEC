/* Luis Gustavo Godoy Camargo */
import java.util.Scanner;


 
public class Exer24 {
    public static void main(String[] args){
        int n = 0;
        Scanner leia = new Scanner(System.in);
       
            System.out.print("Digite o tamanho do array: ");
            n = leia.nextInt();
            int vetor[] = new int[n];
            int ae[] = new int[n];
    		
		for ( int i = 0 ; i < vetor.length ; i++ ) {
			System.out.print("Entre com um elemento: ");
			ae[i] = leia.nextInt();
		}
		System.out.println();
        
        for (int i = 0; i < ae.length; i++) {
            if(ae[i]%2 == 1){
            for (int j = 0; j < i; j++) {
                if (ae[i] > ae[j]) {
                    int temp = ae[i];
                    ae[i] = ae[j];
                    ae[j] = temp;
                }
            }
        }
    }
        
            
			System.out.print("Vetor de pares: ");
			for ( int i = 0 ; i < vetor.length ; i++ ) {
				System.out.print( ae[i] + " " );	
		}
          
    
            
       
        leia.close();
    }
}

