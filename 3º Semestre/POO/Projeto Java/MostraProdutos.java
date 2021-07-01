/*
 * MostraProdutos.java
 */

import javax.swing.JFrame;
import java.awt.*;
import javax.swing.*;
import java.awt.event.*;
import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;

public class MostraProdutos extends JFrame {

	Produto[] produtos;

	JLabel produto, preco, qtd, id;

	JTextField txtP, txtPc, txtQ, txtId;

	JButton salvar, sair;

	int n, i;

	// Produto p = new Produto();

	public MostraProdutos() {

		super("MostraProdutos");
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

		salvar = new JButton("Mostrar");
		sair = new JButton("Sair");

		id.setBounds(70, 40, 50, 20);
		produto.setBounds(70, 80, 50, 20);
		preco.setBounds(70, 120, 50, 20);
		qtd.setBounds(70, 160, 80, 20);

		txtId.setBounds(150, 40, 30, 20);
		txtP.setBounds(150, 80, 100, 20);
		txtPc.setBounds(150, 120, 100, 20);
		txtQ.setBounds(150, 160, 100, 20);

        txtId.setEditable(false);
        txtP.setEditable(false);
        txtPc.setEditable(false);
        txtQ.setEditable(false);

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
                    Produto prod = new Produto();
					txtId.setText(Integer.toString(prod.getId()));
                    txtP.setText(prod.getNome());
					txtPc.setText(Double.toString(prod.getPreco()));
					txtQ.setText(Double.toString(prod.getQuantidade()));
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
		MostraProdutos app = new MostraProdutos();
		app.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}
}
