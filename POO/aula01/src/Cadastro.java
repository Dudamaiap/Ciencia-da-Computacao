public class Cadastro {
    public static void main(String[] args) {
        Produto produto1 = new Produto("Notebook", 3500.00f, 10);
        Produto produto2 = new Produto("Celular", 4300.00f, 27);

        System.out.println("PRODUTO 1");
        produto1.exibirinformacoes();
        System.out.printf("Valor total em estoque R$: %.2f%n", produto1.calcularValorEstoque());

        System.out.println("PRODUTO 2");
        produto2.exibirinformacoes();
        System.out.printf("Valor total em estoque R$: %.2f%n", produto2.calcularValorEstoque());
    }

}
