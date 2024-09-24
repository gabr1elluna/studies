abstract class Associado { // abstract impede que exista um associado "associado", é necessário instanciar um tipo de associado
	protected String cpf; // protected é visível a todos, porém, apenas acessível pelas classes 'filhas' do arquivo 'pai'
	
	protected String nome;
	
	protected double salario;
	
	protected String tipoDeAssociado;
	
	public String getCpf() {
		return this.cpf;
	}
	
	public void setCpf(String cpf) {
		this.cpf = cpf;
	}
	
	public String getNome() {
		return this.nome;
	}
	
	public void setNome(String nome) {
		this.nome = nome;
	}
	
	public abstract double getSalario(); // abstract nesse caso indica que as classes filhas da classe Associado DEVEM instanciar o método getSalario() nos seus métodos
	
	public void setSalario(double salario) {
		this.salario = salario;
	}
	
	public getTipoDeAssociado() {
		return this.tipoDeAssociado;
	}
	
	public void setTipoDeAssociado(String tipoDeAssociado) {
		this.tipoDeAssociado = tipoDeAssociado;
	}
	
	public void imprimir() {
		System.out.println("CPF: " + a1.getCpf);
		System.out.println("NOME: " + a1.getNome);
		System.out.println("SALÁRIO: " + a1.getSalario);
	}
}