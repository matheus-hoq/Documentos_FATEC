/*
 * ProdutoLoja.java
 */

import java.util.Scanner;

public class ProdutoLoja{
	
	private Produto[] produtos;
	private int totalProdutos;
	private int quantidadeProdutos;
	
	public ProdutoLoja(){
		produtos = new Produto[1];
		quantidadeProdutos = 0;
		}
		
	public ProdutoLoja( int totalProdutos){
		setTotalProdutos ( totalProdutos );
		produtos = new Produto[getTotalProdutos()];
		
		quantidadeProdutos = 0;
		}
	
	private void setTotalProdutos( int quantidadeProdutos ){
		if( totalProdutos < 1){
			totalProdutos = 1;
			
			this.totalProdutos = totalProdutos;
		}
	}
		
	public void setProduto( Produto produto ){
		this.produtos[quantidadeProdutos] = produto;
		quantidadeProdutos++;
		}
		
	public int getTotalProdutos(){
		return quantidadeProdutos;
		}
		
	public boolean addProduto( Produto produto ){
		if( quantidadeProdutos < totalProdutos ){
			this.produtos[ quantidadeProdutos ] = produto;
			quantidadeProdutos++;
			return true;
			}
			return false;
		}
		
	@Override
	public String toString(){
		String retorno = "";
		
		for( int i = 0 ; i < produtos.length ; i++ ){
			retorno += ( produtos[i] != null ? "\n" + produtos[i] : "" );
			}
			
		return retorno;
	}
}

