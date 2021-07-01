/*
 * Foto.java 
 */


public class Foto extends Produto{
	
	double tamanho;
	
	public Foto(){
		super();
		}
		
	public Foto( String nome, int id, double preco, double quantidade ){
		super( nome, id, preco, quantidade );
		setTamanho(tamanho);
		}
		
	public void setTamanho( double tamanho ){
		this.tamanho = tamanho;
		}
	
}

