import interfaces.Autenticador;

public class Gerente extends Funcionario implements Autenticador {
    @Override
    public boolean login(String senha) {
        return (senha.equals(this.getCpf())); // Pode fazer também como: return this.getCpf().equals(senha);
    }
    @Override
    public double getSalario() {
        return this.salario + this.salario * 0.10;
    }
}
