public class Publicacao {
  private String titulo;
  private String autor;
  private int anopublicacao;

  // Construtor
  public Publicacao(String titulo, String autor, int anopublicacao) {
    this.titulo = titulo;
    this.autor = autor;
    this.anopublicacao = anopublicacao;
  }

  public String exibirDetalhes(String formato, int quantidade) {
    if (formato.equalsIgnoreCase("simples")) {
      return "Título: " + titulo + ", Autor: " + autor + "\nQuantidade de cópias: " + quantidade;
    } else if (formato.equalsIgnoreCase("detalhado")) {
      return "Título: " + titulo + ", Autor: " + autor + ", Ano: " + anopublicacao +
          "\nQuantidade de cópias: " + quantidade;
    } else {
      return "Formato desconhecido.";
    }
  }

  // Getters e Setters
  public String getTitulo() {
    return titulo;
  }

  public void setTitulo(String titulo) {
    this.titulo = titulo;
  }

  public String getAutor() {
    return autor;
  }

  public void setAutor(String autor) {
    this.autor = autor;
  }

  public int getAnopublicacao() {
    return anopublicacao;
  }

  public void setAnopublicacao(int anopublicacao) {
    this.anopublicacao = anopublicacao;
  }

}
