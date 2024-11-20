public class Main {
    public static void main(String[] args) {
        Carro carro = new Carro("BYD", "Song Pro", 2024, 4, "etanol");
        Moto moto = new Moto("Yamaha", "XRE", 2021, 689, "disco");
        Caminhao caminhao = new Caminhao("Scania", "FH", 2018, 25, 6);

        System.out.println("Informações do Carro:");
        carro.exibirInformacoesCarro();
        carro.calcularAutonomia();

        System.out.println("\nInformações da Moto:");
        moto.exibirInformacoesMoto();
        moto.verificarCategoria();

        System.out.println("\nInformações do Caminhão:");
        caminhao.exibirInformacoesCaminhao();
        caminhao.calcularPesoMaximoPermitido();
    }
}
