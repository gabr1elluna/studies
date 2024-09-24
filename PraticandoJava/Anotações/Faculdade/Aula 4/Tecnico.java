class Tecnico extends Associado {
	
	@Override
	public double getSalario() {
		return this.salario() + 50;
	}
}