/*Matheus Henrique de Oliveira Querido*/

public class bubble{
    public static void main(String[] args){

        int qnt = 10000;
        int[] vetor = new int[qnt];

        for (int i = 0; i < vetor.length; i++){
            vetor[i] = (int) (Math.random()*qnt);
        }

        long tmpIni = System.currentTimeMillis();

        bubbleSort(vetor);

        long tmpFim = System.currentTimeMillis();

        System.out.println("Executando em = " +(tmpFim - tmpIni) + " ms");
    }

public static void bubbleSort(int vetor[]){

	    boolean cng = true;
	    int aux;
	    while (cng){
	        cng = false;
	        for(int i = 0; i < vetor.length - 1; i++){
	            if(vetor[i] > vetor[i + 1]){
	                aux = vetor[i];
	                vetor[i] = vetor[i + 1];
	                vetor[i + 1] = aux;
	                cng = true;
	            }
	        }
	    }
}
}
