#include "Pessoa.hpp"
//função principal do sistema
int main(int argc, char const *argv[])
{
	Pessoa *raiz=NULL;
	string nome;
	int idade;
	int quantidade;
cout << "Informe a quantidade de elementos:" << endl;
cin >> quantidade;
for(int i=0;i<=4;i++){
	Pessoa *novo = new Pessoa();

	cout << "Digite o nome:" << endl;
	cin >> nome;
	novo->setNome(nome);
	cout << "Informe a idade:" << endl;
	cin >> idade;
	novo->setIdade(idade);
	if (raiz==NULL) {
		raiz=novo;
	}else{
		raiz->addPessoa(novo);
	}
};
};
