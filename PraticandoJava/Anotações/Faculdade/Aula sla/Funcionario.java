import exceptions.TesteExceptions;
import interfaces.Autenticador;
public abstract class Funcionario implements Autenticador{
    private String nome;
    private String cpf;
    protected double salario;

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getCpf() {
        return cpf;
    }

    public void setCpf(String cpf) {
        this.cpf = cpf;
    }

    public abstract double getSalario();

    public void setSalario(double salario) throws Exception { // TesteExceptions é uma Exception, por isso não há erro
        if (salario <= 0)
            throw new TesteExceptions("Dá não padrin");
        this.salario = salario;
    }

    /*public abstract boolean login(String senha) {
        if (senha == this.getCpf()) {
            return true;
        }
        return false;
    }*/

    @Override
    public boolean login(String senha) {
        if (senha == this.getCpf()) {
            return true;
        }
        return false;
    }
}
