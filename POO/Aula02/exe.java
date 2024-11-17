public class exe {
  public static void main(String[] args) {
    Pedido pedido1 = new Pedido("Ana", "Carne serenada c/ queijo coalho", 75.00);
    Pedido pedido2 = new Pedido("Pedro", "Mix de pastel", 40.00);
    Pedido pedido3 = new Pedido("Adriano", "Energético", 17.00);

    Restaurante restaurante = new Restaurante("Trigoria");

    System.out.println("--- Gerenciando Pedidos no Restaurante ---");
    restaurante.exibirpedido(pedido1);
    restaurante.exibirpedido(pedido2);
    restaurante.exibirpedido(pedido3);
  }
}
