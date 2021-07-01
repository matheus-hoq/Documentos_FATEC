/*Matheus Henrique de Oliveira Querido*/

public class insertion{
    public static void main(String[] args){

        int qnt = 10000;
        int[] vetor = new int[qnt];

        for (int i = 0; i < vetor.length; i++){
            vetor[i] = (int) (Math.random()*qnt);
        }

        long tmpIni = System.currentTimeMillis();

        selectionSort(vetor);

        long tmpFim = System.currentTimeMillis();

        System.out.println("Executando em = " +(tmpFim - tmpIni) + " ms");
    }

public static void selectionSort(int[] array){

	    for (int fx = 0; fx < array.length - 1; fx++){
	        int menor = fx;
	        
	        for (int i = menor + 1; i < array.length; i++){
	            if (array[i] < array[menor]){
	                menor = i;
	            }
	        }
	        if (menor != fx){
	            int t = array[fx];
	            array[fx] = array[menor];
	            array[menor] = t;
	        }
	    }
}
}
