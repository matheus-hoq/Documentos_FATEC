/* Luis Gustavo Godoy Camargo */
import java.util.Scanner;

public class Exer17 {
    public static void main(String[] args) {
        int n = 0;
        Scanner leia = new Scanner(System.in);
        do {
            System.out.print("Digite valor do vetor: ");
            n = leia.nextInt();
        } while (n > 20);
        int v[] = new int[n];
       
        for(int i = 2; i<n; i++){
            boolean primo = true;
        for(int k = 2; k <i; k++){
            if(i%k ==0){
            primo = false;
            }
        }
        if(primo){v[i] = i;}
    }
        

        for(int i = 0; i < n ; i++){
            if(v[i] != 0){
            System.out.print(v[i]+" ");  
        }
    }

        leia.close();

    }
}
