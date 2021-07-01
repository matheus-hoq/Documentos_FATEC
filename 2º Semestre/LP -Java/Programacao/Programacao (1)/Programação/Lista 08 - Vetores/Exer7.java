/* Luis Gustavo Godoy Camargo */
import java.util.Scanner;

public class Exer7 {
    public static void main(String[] args) {
        int a = 0 ,i = 0, ma = 0, me = 100000;
        Scanner leia = new Scanner(System.in);
        do {
            System.out.print("Digite qual o valor do vetor: ");
            i = leia.nextInt();
        } while (i > 20);
        int c[] = new int[i];
        
        do {
            System.out.print("Digite um número para a posição "+a+": ");
            c[a] = leia.nextInt();
            if(c[a]>ma){
                ma = c[a];
            }
            if(c[a]<me){
                me = c[a];
            }
            a++;
        } while (a < i);
        System.out.println("Maior valor: "+ ma);
        System.out.println("Menor valor: "+ me);

        leia.close();
    }
}
