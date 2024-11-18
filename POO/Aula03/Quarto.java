public class Quarto {
  public static void main(String[] args) {

    Hotel quarto1 = new Hotel(34, 4, false);
    Hotel quarto2 = new Hotel(25, 7, true);

    System.out.println("Quarto 1: " + quarto1.getNumQuarto() + " capacidade de " + quarto1.getCapacidade()
        + " pessoas. Ocupado? " + quarto1.isStatusOcupacao());

    System.out.println("\n Alterando quarto " + quarto1.getNumQuarto() + " para ocupado ");
    quarto1.setStatusOcupacao(true);

    System.out.println("Quarto atualizado");
    System.out.println("Quarto " + quarto1.getNumQuarto() + " \n Ocupado?: " + quarto1.isStatusOcupacao());
  }

}
