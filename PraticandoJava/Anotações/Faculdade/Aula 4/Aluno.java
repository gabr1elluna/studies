class Aluno extends Associado { // Ao utilizar "extends", você está dizendo que a classe Aluno estará herdando os métodos presentes no arquivo Associado, conceito de HERANÇA
	
	/*public void teste() {
		System.out.println("teste: " + this.cpf);
	}*/
	
	@Override // Está querendo dizer que o código abaixo está reescrevendo o código do arquivo pai
	public double getSalario() {
		return super.getSalario() - 100; // super é como usar o "this", mas para acessar um atributo de um arquivo diferente
		// caso contrário, usando o "this", seria como chamar o método getSalario() da classe Aluno, e não do arquivo Associado 
	}
}