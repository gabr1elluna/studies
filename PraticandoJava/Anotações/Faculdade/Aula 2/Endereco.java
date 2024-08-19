class Endereco {
  private String cep;
  private String logradouro;
  private String complemento;
  private String bairro;

  public Endereco () {
      
  }

  public Endereco (String cep, String logradouro, String complemento, String bairro) {
      this.setCep(cep);
      this.setLogradouro(logradouro);
      this.setComplemento(complemento);
      this.setBairro(bairro);
  }

  public String getCep() {
    return this.cep;
  }

  public void setCep(String cep) {
    this.cep = cep.replaceAll("\\.|-", "");
  }

  public String getLogradouro() {
    return this.logradouro;
  }

  public void setLogradouro(String logradouro) {
    this.logradouro = logradouro.toUpperCase();
  }

  public String getComplemento() {
    return this.complemento;
  }

  public void setComplemento(String complemento) {
    this.complemento = complemento.toUpperCase();
  }

  public String getBairro() {
    return this.bairro;
  }

  public void setBairro(String bairro) {
    this.bairro = bairro.toUpperCase();
  }
}
