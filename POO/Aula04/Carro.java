public class Carro extends Veiculo {
    private int quantidadePortas;
    private String tipoCombustivel;

    public Carro(String marca, String modelo, int ano, int quantidadePortas, String tipoCombustivel) {
        super(marca, modelo, ano);
        this.quantidadePortas = quantidadePortas;
        this.tipoCombustivel = tipoCombustivel;
    }

    public int getQuantidadePortas() {
        return quantidadePortas;
    }

    public void setQuantidadePortas(int quantidadePortas) {
        this.quantidadePortas = quantidadePortas;
    }

    public String getTipoCombustivel() {
        return tipoCombustivel;
    }

    public void setTipoCombustivel(String tipoCombustivel) {
        this.tipoCombustivel = tipoCombustivel;
    }

    public void calcularAutonomia() {
        if (tipoCombustivel.equalsIgnoreCase("gasolina")) {
            System.out.println("Autonomia estimada: 15 km/l");
        } else if (tipoCombustivel.equalsIgnoreCase("diesel")) {
            System.out.println("Autonomia estimada: 12 km/l");
        } else if (tipoCombustivel.equalsIgnoreCase("etanol")) {
            System.out.println("Autonomia estimada: 8 km/l");
        } else if (tipoCombustivel.equalsIgnoreCase("eletrico")) {
            System.out.println("Autonomia estimada: 250 km por carga");
        }
    }

    public void exibirInformacoesCarro() {
        exibirInformacoes();
        System.out.println("Quantidade de Portas: " + quantidadePortas + "\nTipo de Combustível: " + tipoCombustivel);
    }
}
