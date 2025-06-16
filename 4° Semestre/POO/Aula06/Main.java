public class Main {
  public static void main(String[] args) {
    Animal cachorro = new Cachorro("Max", 11, "Labrador");
    Animal gato = new Gato("Lara", 3, "Cinza com branco");

    cachorro.fazerSom();
    ((Cachorro) cachorro).executarComportamento();

    gato.fazerSom();
    ((Gato) gato).executarComportamento();
  }
}
