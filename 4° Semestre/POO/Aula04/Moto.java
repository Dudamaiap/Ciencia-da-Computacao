public class Moto extends Veiculo {
    private int cilindradas;
    private String tipoFreio;

    public Moto(String marca, String modelo, int ano, int cilindradas, String tipoFreio) {
        super(marca, modelo, ano);
        this.cilindradas = cilindradas;
        this.tipoFreio = tipoFreio;
    }

    public int getCilindradas() {
        return cilindradas;
    }

    public void setCilindradas(int cilindradas) {
        this.cilindradas = cilindradas;
    }

    public String getTipoFreio() {
        return tipoFreio;
    }

    public void setTipoFreio(String tipoFreio) {
        this.tipoFreio = tipoFreio;
    }

    public void verificarCategoria() {
        if (cilindradas <= 250) {
            System.out.println("Categoria: Moto Pequena");
        } else {
            System.out.println("Categoria: Moto Grande");
        }
    }

    public void exibirInformacoesMoto() {
        exibirInformacoes();
        System.out.println("Cilindradas: " + cilindradas + "\nTipo de Freio: " + tipoFreio);
    }
}
