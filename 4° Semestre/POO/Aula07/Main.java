import java.util.ArrayList;
import java.util.List;

public class Main {
  public static void main(String[] args) {
    List<Animal> animais = new ArrayList<>();

    animais.add(new Cachorro("Max", 11, "Labrador"));
    animais.add(new Gato("Lara", 3, "Cinza com branco"));
    animais.add(new Cachorro("Rex", 5, "Golden Retriever"));
    animais.add(new Gato("Mimi", 2, "Preta"));

    System.out.println(" Sons dos Animais ");
    for (Animal animal : animais) {
      animal.fazerSom(); // Método polimórfico
    }

    System.out.println("\n Comportamentos dos Animais ");
    for (Animal animal : animais) {
      if (animal instanceof Cachorro) {
        ((Cachorro) animal).executarComportamento();
      } else if (animal instanceof Gato) {
        ((Gato) animal).executarComportamento();
      }
    }
  }
}
