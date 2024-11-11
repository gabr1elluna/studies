import interfaces.Autenticador;

public class Cliente implements Autenticador {
    @Override
    public boolean login(String senha) {
        return (senha.equals("123456"));
    }
}
