public class Cachorro extends Animal implements Comportamento {
  private String raca;

  // Construtor
  public Cachorro(String nome, int idade, String raca) {
    super(nome, idade);
    this.raca = raca;
  }

  // Getters e Setters
  public String getRaca() {
    return raca;
  }

  public void setRaca(String raca) {
    this.raca = raca;
  }

  @Override
  public void fazerSom() {
    System.out.println(getNome() + " está latindo.");
  }

  @Override
  public void executarComportamento() {
    System.out.println(getNome() + " está correndo.");
  }
}
