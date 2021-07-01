/* Luis Gustavo Godoy Camargo */
import java.util.Scanner;

public class Exer3 {
    public static void main(String[] args) {
        int a = 0 ,i = 0;
        Scanner leia = new Scanner(System.in);
            System.out.print("Digite qual o valor do vetor: ");
            i = leia.nextInt();
        int c[] = new int[i];
        
        do {
            System.out.print("Digite um número para a posição "+a+": ");
            c[a] = leia.nextInt();
            a++;
        } while (a < i);
        a = 0;
        do {
            System.out.printf("\nVetor %d Valor %d",a,c[a]);
            a++;
        } while (a < i);

        leia.close();
    }
}
