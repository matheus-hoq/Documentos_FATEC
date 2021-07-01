/*
 * Quadro.java
 */


public class Quadro extends Produto {
	
	String material;
	
	public Quadro(){
		super();
		}
	
	
	public Quadro( String nome, int id, double preco, double quantidade){
		super( nome, id, preco, quantidade);
		setMaterial(material);
		}
		
	public void setMaterial( String material ){
		this.material = material;
		}
		
	public String getMaterial(){
		return material;
		}
		
	
	
}

