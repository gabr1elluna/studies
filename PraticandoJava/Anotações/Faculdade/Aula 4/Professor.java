class Professor extends Associado {
	
	@Override
	public double getSalario() {
		return super.getSalario() + 100;
	}
}