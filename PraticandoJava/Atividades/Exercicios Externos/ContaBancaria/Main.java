public class Main {
    public static void main(String[] args) {
        ContaBancaria cb1 = new ContaBancaria();
        ContaPoupanca cp1 = new ContaPoupanca();
        ContaEspecial ce1 = new ContaEspecial();

        cb1.setNomeCliente("Waldomiro");
        cb1.setNumConta("0001");
        cb1.setSaldo(500.00);

        cb1.depositar(500.00);
        cb1.sacar(310.00);

        System.out.println(cb1.getSaldo());

        cp1.setNomeCliente("Waldomiro");
        cp1.setNumConta("0002");
        cp1.setSaldo(500.00);
        cp1.setDiaRendimento(10);

        cp1.calcularNovoSaldo(0.01);
        System.out.println(cp1.getSaldo());

        ce1.setNomeCliente("Waldomiro");
        ce1.setNumConta("0003");
        ce1.setSaldo(500.00);
        ce1.setLimite(200.00);

        ce1.sacar(310.00);
        System.out.println(ce1.getSaldo());
    }
}
