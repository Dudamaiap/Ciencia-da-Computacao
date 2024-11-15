//Classe 
public class Produto {
  String nome;
  float preco;
  int quantidade;

  // Construtor
  public Produto(String nome, float preco, int quantidade) {
    this.nome = nome;
    this.preco = preco;
    this.quantidade = quantidade;
  }

  // Método para exibir informação do produto
  public void exibirinformacoes() {
    System.out.println("Nome" + nome);
    System.out.println("Preço" + preco);
    System.out.println("Quantidade" + quantidade);
  }

  // Método para calcular o valor do estoque
  public double calcularValorEstoque() {
    return preco * quantidade;
  }

}
