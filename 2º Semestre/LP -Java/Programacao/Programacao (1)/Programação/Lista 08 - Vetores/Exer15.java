
/* Luis Gustavo Godoy Camargo */
import java.util.Scanner;

public class Exer15 {
    public static void main(String[] args) {
        int s[] = new int[10];
        int t[] = new int[15];
        int n = 0, m = 0, i = 0, j = 0;
        Scanner leia = new Scanner(System.in);
        do {
            System.out.print("Digite valor de S: ");
            n = leia.nextInt();
        } while (i > 10);
        do {
            System.out.print("Digite valor de T: ");
            m = leia.nextInt();
        } while (i > 15);
        System.out.print("\n");

        do {
            System.out.print("Digite valor de S: ");
            s[i] = leia.nextInt();
            i++;
        } while (i < n);
        i = 0;
        do {
            System.out.print("Digite valor de T: ");
            t[i] = leia.nextInt();
            i++;
        } while (i < m);
        i = 0;

        do {
            System.out.println("Valor lido de S na posição " + i + " :" + s[i]);
            i++;
        } while (i < n);
        i = 0;
        System.out.println("\n");
        do {
            System.out.println("Valor lido de T na posição " + i + " :" + t[i]);
            i++;
        } while (i < m);

        int u[] = new int[n + m];

        for (i = 0; i < n; i++) {
            u[j] = s[i];
            j += 2;
        }

        j = 1;
        for (i = 0; i < m; i++) {
            u[j] = t[i];
            j += 2;
        }

        System.out.println("\n");

        for (i = 0; i < n + m; i++) {
            System.out.println("Valor concatenado de U na posição " + i + " :" + u[i]);
        }

        leia.close();

    }
}
