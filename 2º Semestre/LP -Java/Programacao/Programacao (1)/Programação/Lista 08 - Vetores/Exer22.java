/* Luis Gustavo Godoy Camargo */
import java.util.Scanner;
 
public class Exer22 {
    public static void main(String[] args){
        int n = 0,ma,j = 0;
        Scanner leia = new Scanner(System.in);
        do{
            System.out.print("Digite o tamanho do array: ");
            n = leia.nextInt();
            }while(n> 20 || n < 0);
            int ac[] = new int[n];
            System.out.print("Digite o tamanho máximo do número: ");
            ma = leia.nextInt();
            for(j = 0; j<n; j++){
                System.out.print("Digite o valor: ");
                ac[j] = leia.nextInt();
               while(ac[j]> ma){
                    System.out.print("Digite o valor novamente: ");
                    ac[j] = leia.nextInt(); 
                }
            }
            for(j = 0; j<n; j++){
                System.out.print(ac[j]+" , ");
            }
       
        leia.close();
    }
}
