
/* Luis Gustavo Godoy Camargo */
import java.util.Scanner;

public class Exer16 {
    public static void main(String[] args) {
        int n = 0, n1 = 0, n2 = 1, n3;
        Scanner leia = new Scanner(System.in);
        do {
            System.out.print("Digite valor do vetor: ");
            n = leia.nextInt();
        } while (n > 20);
        int v[] = new int[n];
       
        for (int i = 0; i < n; i++) {
            n3 = n1 + n2;
            v[i] = n3;
            n1 = n2;
            n2 = n3;
        }
        

        for(int i = 0; i < n ; i++){
            if(v[i] != 0){
            System.out.print(v[i]+" ");  
        }
    }

        leia.close();

    }
}
