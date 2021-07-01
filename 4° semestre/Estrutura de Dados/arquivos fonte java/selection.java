/*Matheus Henrique de Oliveira Querido*/

public class selection{
    public static void main(String[] args){

        int qnt = 10000;
        int[] vetor = new int[qnt];

        for (int i = 0; i < vetor.length; i++){
            vetor[i] = (int) (Math.random()*qnt);
        }

        long tmpIni = System.currentTimeMillis();

        insertionSort(vetor);

        long tmpFim = System.currentTimeMillis();

        System.out.println("Executando em = " +(tmpFim - tmpIni) + " ms");
    }

public static void insertionSort(int[] vetor){

	int j;
	int key;
	int i;

	for(j = 1; j < vetor.length; j++){
	key = vetor[j];
	for( i = j - 1; (i >= 0) && (vetor[i] > key); i--){
		vetor[i + 1] = vetor[i];
	}
	vetor[i + 1] = key;
	}
}
}
