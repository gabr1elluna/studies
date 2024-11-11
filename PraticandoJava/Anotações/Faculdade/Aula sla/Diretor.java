import interfaces.Autenticador;

public class Diretor extends Funcionario implements Autenticador {
    @Override
    public boolean login(String senha) {
        return true;
    }
    @Override
    public double getSalario() {
        return this.salario + this.salario * 0.50;
    }
}
