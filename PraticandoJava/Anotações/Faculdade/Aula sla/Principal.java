public class Principal {
    public static void main(String[] args) throws Exception{
        // Testando exceptions
        Funcionario f = new Gerente();
        f.setCpf("432.443.893-93");
        f.setNome("Paulo");
        try {
            f.setSalario(1000);
        } catch (Exception e) {
            System.out.println(e.getMessage());
        }

        System.out.println(f.getSalario());

        Funcionario f1 = new Diretor();
        f1.setCpf("219.783.893-74");
        f1.setNome("Henrique");
        try {
            f1.setSalario(1000);
        } catch (Exception e) {
            System.out.println(e.getMessage());
        }

        System.out.println(f1.getSalario());

        Funcionario f2 = new Diretor();
        f2.setCpf("375.982.143-39");
        f2.setNome("Antônio");
        try {
            f2.setSalario(2000);
        } catch (Exception e) {
            System.out.println(e.getMessage());
        };

        System.out.println(f2.getSalario());

        Funcionario f3 = new Diretor();
        f3.setCpf("182.379.902-39");
        f3.setNome("Bruno");
        try {
            f3.setSalario(2000);
        } catch (Exception e) {
            System.out.println(e.getMessage());
        };

        // Testando a classe ControleSalarial

        Diretor d1 = new Diretor();

        ControleSalarial cs1 = new ControleSalarial();
        cs1.getSalarioFinal(d1);

        // Testando a interface Autenticador

        Gerente g1 = new Gerente();
        g1.setCpf("123.456.789-10");

        System.out.println(g1.login("123.456.789-10"));

    }
}