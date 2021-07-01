/*
 * Album.java
 */


public class Album extends Produto{
	
	double tamanho;
	
	public Album(){
		super();
		}
		
	public Album( String nome, int id, double preco, double quantidade ){
		super( nome, id, preco, quantidade );
		setTamanho(tamanho);
		}
		
	public void setTamanho( double tamanho ){
		this.tamanho = tamanho;
		}
	
}

