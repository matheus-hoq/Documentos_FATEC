/* Diogo Américo/ Matheus Henrique/ Isabelle Caroline/ Lucas Lima
 * Produto.java 
 */


public class Produto{
		
		private String nome;
		private int id;
		private double preco;
		private double quantidade;
		
		public Produto(){
			
			this.nome = "produto";
			this.id = 1;
			this.preco = 00.00;
			this.quantidade = 0.00;
			
			}
			
		public Produto(  String nome, int id, double preco, double quantidade ){
			setNome(nome);
			setId(id);
			setPreco(preco);
			setQuantidade(quantidade);
			}
		
		public void setNome( String nome ){
			if( ! nome.isEmpty() ){
				this.nome = nome;
				}
			}
		
		public void setId( int id ){
			if( id > 0 ){
				this.id = id;
				}
			}
			
		public void setPreco( double preco ){
			if( preco > 0 ){
				this.preco = preco;
				}
			}
			
		public void setQuantidade( double quantidade ){
			if( quantidade >= 0 ){
				this.quantidade = quantidade;
				}
			}
			
		public String getNome(){
			return nome;
			}
			
		public int getId(){
			return id;
			}
			
		public double getPreco(){
			return preco;
			}
			
		public double getQuantidade(){
			return quantidade;
			}
			
		@Override
		public String toString () {
			return nome + " " + id + " " + quantidade + " " + preco;
			}
		
}


