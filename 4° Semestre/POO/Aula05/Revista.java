public class Revista extends Publicacao {
  private String periodicidade;

  // Construtor
  public Revista(String titulo, String autor, int anoPublicacao, String periodicidade) {
    super(titulo, autor, anoPublicacao);
    this.periodicidade = periodicidade;
  }

  @Override
  public String exibirDetalhes(String formato, int quantidade) {
    String detalhesBasicos = super.exibirDetalhes(formato, quantidade);
    if (formato.equalsIgnoreCase("detalhado")) {
      return detalhesBasicos + "\nPeriodicidade: " + periodicidade;
    }
    return detalhesBasicos;
  }

  // Getters e Setters
  public String getPeriodicidade() {
    return periodicidade;
  }

  public void setPeriodicidade(String periodicidade) {
    this.periodicidade = periodicidade;
  }
}
