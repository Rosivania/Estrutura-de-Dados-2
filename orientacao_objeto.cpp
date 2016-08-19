#include "veiculo.hpp"
//função principal do sistema
int main(int argc, char const *argv[])
{
	//variaveis locais
	string texto;
	float valor;
	int numero;
	//exemplo de manipulação de objetos - estatica
	veiculo veiculo;
	cout << "Informe a marca do veiculo:" << endl;
	cin >> texto;
	veiculo.setMarca(texto);

	cout << "Informe o modelo do veiculo:" << endl;
	cin >> texto;
	veiculo.setModelo(texto);

	cout << "Informe o preco do veiculo:" << endl;
	cin >> valor;
	veiculo.setPreco(valor);

	cout << "Dados do veiculo: ";
	cout << veiculo.getMarca() << " - ";
	cout << veiculo.getModelo() << " - ";
	cout << veiculo.getPreco() << endl << endl;

	//exemplo de manipulação de objetos - dinamica + herança
	Carro * carro;
	carro = new Carro();

	cout <<"Informe a marca do carro:" << endl;
	cin >> texto;
	carro-> setMarca(texto);

	cout <<"Informe o modelo do carro:" << endl;
	cin >> texto;
	carro-> setModelo(texto);

	cout << "Informe o preco do veiculo:" << endl;
	cin >> valor;
	carro-> setPreco(valor);

	cout << "Informe o tipo de cambio do veiculo:" << endl;
	cin >> numero;
	carro->setTipoCambio(numero);

	cout << "Informe o numero de assentos do veiculo:" << endl;
	cin >> numero;
	carro->setNumeroAssentos(numero);

	cout <<"Dados do carro: ";
	cout<< carro ->getMarca() << " - ";
	cout << carro ->getMarca() << " - ";
	cout << carro ->getModelo() << " - ";
	cout << carro ->getPreco() << " - ";
	cout << carro ->getTipoCambio() << " - ";
	cout << carro ->getNumeroAssentos() << endl << endl;
}
