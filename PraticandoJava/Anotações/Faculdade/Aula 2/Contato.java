class Contato {

    private String telefone;
    private String celular;
    private String email;

    public String getTelefone() {
      return this.telefone;
    }

    public void setTelefone(String telefone) {
      this.telefone = telefone;
    }

    public String getCelular() {
      return this.celular;
    }

    public void setCelular(String celular) {
      this.celular = celular;
    }

    public String getEmail() {
      return this.email;
    }

    public void setEmail(String email) {
      this.email = email.toUpperCase();
    }
}
