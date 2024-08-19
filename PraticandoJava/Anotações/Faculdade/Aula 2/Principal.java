class Principal {
    public static void main (String[] args) {
        /*
        Contato c1 = new Contato();
        c1.setTelefone("(86)3222-3697");
        c1.setCelular("(86)99950-3697");
        c1.setEmail("thiago@unifap.br");
        */

        //Referência a um objeto do tipo Endereço
        Endereco e1 = new Endereco();
        e1.setCep("64.014-300");
        e1.setLogradouro("Rua do Sol");
        e1.setComplemento("Casa A");
        e1.setBairro("Piçarra");

        //Criando referencia de endereço de outra forma
        Endereco e2 = new Endereco("68-903-193", "Av. Stephan Houat", "420", "Jardim Marco Zero");

        Associado a1 = new Associado();
        a1.setCpf("033.440.333-30");
        a1.setNome("Thiago Pinheiro do Nascimento");
        a1.setSexo('m');
        a1.setEndereco(e2); /*Setando endereço com a Referência*/


        //Setando o contato de uma forma diferente da que fiz com endereço
        a1.setContato(new Contato());
        a1.getContato().setTelefone("(86)3222-3697");
        a1.getContato().setCelular("(86)99950-3697");
        a1.getContato().setEmail("thiago@unifap.br");
        //..mas eu poderia descomentar da linha 3 até a linha 8 e fazer...
        //a1.setContato(c1);

        //a1.imprimirDados(); Impressão de dados

        Associado a2 = new Associado();

        Associado a3 = new Associado();

        //Só posso chamar assim, pois o método getTotalDeAssociados() é static
        //Se ele não fosse, ele só poderia ser chamado a partir de um objeto
        System.out.println(Associado.getTotalDeAssociados());

    }
}
