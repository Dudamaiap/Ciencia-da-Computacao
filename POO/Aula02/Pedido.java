//Classe
public class Pedido {
  String cliente;
  String prato;
  double preco;

  // Construtor
  public Pedido(String cliente, String prato, double preco) {
    this.cliente = cliente;
    this.prato = prato;
    this.preco = preco;
  }

  // Método
  public void exibirpedido() {
    System.out.println("Cliente: " + cliente);
    System.out.println("Prato: " + prato);
    System.out.printf("Preço: R$ %.2f\n", preco);
  }
}
