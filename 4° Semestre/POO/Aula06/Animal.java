public class Animal {
  private String nome;
  private int idade;

  // Construtor
  public Animal(String nome, int idade) {
    this.nome = nome;
    this.idade = idade;
  }

  // Getters e Setters
  public String getNome() {
    return nome;
  }

  public void setNome(String nome) {
    this.nome = nome;
  }

  public int getIdade() {
    return idade;
  }

  public void setIdade(int idade) {
    this.idade = idade;
  }

  public void fazerSom() {
    System.out.println(nome + " está fazendo um som");
  }
}