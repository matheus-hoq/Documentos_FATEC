public class L4_Ex7 {

    public static void main(String[] args) {

    	Scanner leia =    new Scanner ( System.in );
    	Scanner leiaStr = new Scanner ( System.in );

    	int hora = 0;
    	String opcao = "";

    	System.out.print("Entrar com hora [M]anualmente ou gerar [A]leatorio: ");
    	opcao = leiaStr.netxline();

    	if ( opcao.equalsIgnoreCase == "M"){
    		System.out.println("Escolheu Manualmente");
    	}else {
    		System.out.println("Escolheu Aleatoriamente");
    	}
    	System.out.println ( opcao == "M" );
    }


}