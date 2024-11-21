public class Livro extends Publicacao {
  private int numeroPaginas;

  // Construtor
  public Livro(String titulo, String autor, int anopublicacao, int numeroPaginas) {
    super(titulo, autor, anopublicacao);
    this.numeroPaginas = numeroPaginas;
  }

  @Override
  public String exibirDetalhes(String formato, int quantidade) {
    String detalhesBasicos = super.exibirDetalhes(formato, quantidade);
    if (formato.equalsIgnoreCase("detalhado")) {
      return detalhesBasicos + "\nNúmero de páginas: " + numeroPaginas;
    }
    return detalhesBasicos;
  }

  // Getters e Setters
  public int getNumeroPaginas() {
    return numeroPaginas;
  }

  public void setNumeroPaginas(int numeroPaginas) {
    this.numeroPaginas = numeroPaginas;
  }
}
