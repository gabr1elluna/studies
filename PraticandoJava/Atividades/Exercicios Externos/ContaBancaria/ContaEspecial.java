public class ContaEspecial extends ContaBancaria{
    private double limite;

    public double getLimite() {
        return limite;
    }

    public void setLimite(double limite) {
        this.limite = limite;
    }

    @Override
    public boolean sacar(double valorSaque) {
        double saldoComLimite = this.getSaldo() + limite;
        if (valorSaque > saldoComLimite) {
            System.out.println("Não há como processar o saque.");
            return false;
        } else {
            this.setSaldo(this.getSaldo() - valorSaque);
            return true;
        }
    }
}
