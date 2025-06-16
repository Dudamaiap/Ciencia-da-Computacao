public class Gato extends Animal implements Comportamento {
  private String cor;

  // Construtor
  public Gato(String nome, int idade, String cor) {
    super(nome, idade);
    this.cor = cor;
  }

  // Getters e Setters
  public String getCor() {
    return cor;
  }

  public void setCor(String cor) {
    this.cor = cor;
  }

  @Override
  public void fazerSom() {
    System.out.println(getNome() + " está miando.");
  }

  @Override
  public void executarComportamento() {
    System.out.println(getNome() + " está se espreguiçando.");
  }
}
