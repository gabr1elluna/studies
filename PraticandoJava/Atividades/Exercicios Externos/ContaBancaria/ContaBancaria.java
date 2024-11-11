public class ContaBancaria {
    private String nomeCliente;
    private String numConta;
    private double saldo;

    public String getNomeCliente() {
        return nomeCliente;
    }

    public void setNomeCliente(String nomeCliente) {
        this.nomeCliente = nomeCliente;
    }

    public String getNumConta() {
        return numConta;
    }

    public void setNumConta(String numConta) {
        this.numConta = numConta;
    }

    public double getSaldo() {
        return saldo;
    }

    public void setSaldo(double saldo) {
        this.saldo = saldo;
    }

    public boolean sacar(double valorSaque) {
        if (valorSaque > this.saldo) {
            System.out.println("Não há como sacar este valor");
            return false;
        } else {
            this.saldo -= valorSaque;
            return true;
        }
    }

    public void depositar(double valorDeposito) {
        this.saldo += valorDeposito;
    }
}