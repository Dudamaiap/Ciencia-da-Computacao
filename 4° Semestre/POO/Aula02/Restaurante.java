public class Restaurante {
  private String nome;

  public Restaurante(String nome) {
    this.nome = nome;
  }

  public void exibirpedido(Pedido pedido) {
    System.out.println("Restaurante: " + nome);
    System.out.println("Pedido adicionado:");
    pedido.exibirpedido();
  }
}
