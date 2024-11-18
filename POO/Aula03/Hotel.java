public class Hotel {
  private int numQuarto;
  private int capacidade;
  private boolean statusOcupacao;

  // Construtor
  public Hotel(int numQuarto, int capacidade, boolean statusOcupacao) {
    this.numQuarto = numQuarto;
    this.capacidade = capacidade;
    this.statusOcupacao = statusOcupacao;

    System.out.println("Quarto cadastrado: Número " + this.numQuarto + ", Capacidade: " + this.capacidade
        + ", Ocupado: " + this.statusOcupacao);
  }

  // Get e Set
  public int getNumQuarto() {
    return numQuarto;
  }

  public void setNumQuarto(int numQuarto) {
    this.numQuarto = numQuarto;
  }

  public int getCapacidade() {
    return capacidade;
  }

  public void setCapacidade(int capacidade) {
    this.capacidade = capacidade;
  }

  public boolean isStatusOcupacao() {
    return statusOcupacao;
  }

  public void setStatusOcupacao(boolean statusOcupacao) {
    this.statusOcupacao = statusOcupacao;
  }

}
