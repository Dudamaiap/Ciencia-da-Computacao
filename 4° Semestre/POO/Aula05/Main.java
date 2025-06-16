public class Main {
  public static void main(String[] args) {
    Publicacao livro = new Livro("Dom Quixote", "Miguel de Cervantes", 1605, 863);

    Publicacao revista = new Revista("National Geographic", "Diversos", 2024, "Mensal");

    System.out.println(livro.exibirDetalhes("detalhado", 3));
    System.out.println();
    System.out.println(revista.exibirDetalhes("simples", 5));
  }
}
