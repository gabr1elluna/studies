class Associado {
  private String cpf;
  private String nome;
  private char sexo;
  private Endereco endereco;
  private Contato contato;

  //Atributo da classe
  public static int totalDeAssociados;

  //Construtor que permite o cálculo do total de associados
  public Associado() {
      //por ser estático, não uso this. e sim Associado.
      Associado.totalDeAssociados++;
  }


  public static int getTotalDeAssociados() {
      return Associado.totalDeAssociados;
  }

  public String getCpf() {
    return this.cpf;
  }

  public void setCpf(String cpf) {
    this.cpf = cpf.replaceAll("\\.|-", "");
  }

  public String getNome() {
    return this.nome;
  }

  public void setNome(String nome) {
    this.nome = nome.toUpperCase();
  }

  public char getSexo() {
    return this.sexo;
  }

  public void setSexo(char sexo) {
    this.sexo = sexo;
  }

  public Endereco getEndereco() {
    return this.endereco;
  }

  public void setEndereco(Endereco endereco) {
    this.endereco = endereco;
  }

  public Contato getContato() {
    return this.contato;
  }

  public void setContato(Contato contato) {
    this.contato = contato;
  }

  public void imprimirDados() {
      System.out.println("CPF: " + this.cpf);
      System.out.println("Nome: " + this.nome);
      System.out.println("Endereco: " + this.endereco.getCep() + " - " + this.endereco.getLogradouro() + " - " + this.endereco.getComplemento());
      System.out.println("Telefone: " + this.contato.getTelefone());
      System.out.println("Celular: " + this.contato.getCelular());
  }
}
