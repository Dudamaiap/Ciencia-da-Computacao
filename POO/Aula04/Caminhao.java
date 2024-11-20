public class Caminhao extends Veiculo {
    private double capacidadeCarga;
    private int eixos;

    public Caminhao(String marca, String modelo, int ano, double capacidadeCarga, int eixos) {
        super(marca, modelo, ano);
        this.capacidadeCarga = capacidadeCarga;
        this.eixos = eixos;
    }

    public double getCapacidadeCarga() {
        return capacidadeCarga;
    }

    public void setCapacidadeCarga(double capacidadeCarga) {
        this.capacidadeCarga = capacidadeCarga;
    }

    public int getEixos() {
        return eixos;
    }

    public void setEixos(int eixos) {
        this.eixos = eixos;
    }

    public void calcularPesoMaximoPermitido() {
        double pesoMaximo = capacidadeCarga * 1000;
        System.out.println("Peso máximo permitido: " + pesoMaximo + " kg");
    }

    public void exibirInformacoesCaminhao() {
        exibirInformacoes();
        System.out.println("Capacidade de Carga: " + capacidadeCarga + " toneladas\nEixos: " + eixos);
    }
}
