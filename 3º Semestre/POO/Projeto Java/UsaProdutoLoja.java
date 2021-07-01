/*
 * UsaProdutoLoja.java
 */

import javax.swing.JFrame;
import java.awt.*;
import javax.swing.*;
import java.awt.event.*;
import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;

public class UsaProdutoLoja extends JFrame {

	Produto[] produtos;

	JLabel produto, preco, qtd, id;

	JTextField txtP, txtPc, txtQ, txtId;

	JButton salvar, sair;

	int n, i;

	// Produto p = new Produto();

	public UsaProdutoLoja() {

		super("Produtos");
		Container tela = getContentPane();
		setLayout(null);

		produto = new JLabel("Nome : ");
		preco = new JLabel("Preco : ");
		qtd = new JLabel("Quantidade : ");
		id = new JLabel("Id : ");

		txtP = new JTextField();
		txtPc = new JTextField();
		txtQ = new JTextField();
		txtId = new JTextField();

		salvar = new JButton("Salvar");
		sair = new JButton("Sair");

		id.setBounds(70, 40, 50, 20);
		produto.setBounds(70, 80, 50, 20);
		preco.setBounds(70, 120, 50, 20);
		qtd.setBounds(70, 160, 80, 20);

		txtId.setBounds(150, 40, 30, 20);
		txtP.setBounds(150, 80, 100, 20);
		txtPc.setBounds(150, 120, 100, 20);
		txtQ.setBounds(150, 160, 100, 20);

		salvar.setBounds(200, 220, 80, 20);

		sair.setBounds(300, 220, 80, 20);

		n = Font.PLAIN;
		i = Font.PLAIN;

		sair.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent arg0) {
				System.exit(0);
			}
		});

		salvar.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent arg0) {
				String arquivo = "Estoque.txt";
				double precoT = Integer.parseInt(txtPc.getText()) * Integer.parseInt(txtQ.getText());
				try {
					FileWriter fw = new FileWriter(arquivo, true);
					BufferedWriter bw = new BufferedWriter(fw);

					bw.write("Id : " + txtId.getText() + " / Nome: " + txtP.getText() + " / Preço: R$" + txtPc.getText()
							+ " / Quantidade: " + txtQ.getText() + " / Preço total: R$" + precoT + " \n");
					bw.newLine();

					bw.close();
					fw.close();

					JOptionPane.showMessageDialog(null, "Salvo!\n Dados cadastrados com sucesso!");

				} catch (IOException ex) {
					JOptionPane.showMessageDialog(null, "Erro!\n Arquivo!");
				}

			}
		});

		this.add(produto);
		this.add(preco);
		this.add(qtd);
		this.add(id);

		this.add(txtId);
		this.add(txtP);
		this.add(txtPc);
		this.add(txtQ);

		this.add(salvar);
		this.add(sair);

		setSize(600, 300);
		setLayout(null);
		setLocationRelativeTo(null);
		setVisible(true);
		setResizable(false);
	}

	// pega os valores dos campos
	void getValores() {

	}

	public static void main(String[] args) {
		UsaProdutoLoja app = new UsaProdutoLoja();
		app.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}
}
