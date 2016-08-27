#include <stdlib.h>
#include "Pessoa.hpp"

string nome;
Pessoa *raiz=NULL;
int idade;

void inserir(){
	Pessoa *novo = new Pessoa();
	cout << "\n[1] Inserir Pessoa " << endl;
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

void presentation(){
	cout << "\n Univesidade Federal do Tocantins\n Campus Universitario de Palmas\n Coordenacao de Ciencia da Computacao\n Estrutura de Dados II\n";
	cout << " Prof. MSc. Thiago Magalhaes de Brito Rodrigues"<< endl;
	cout << " Rosivania Rodrigues Batista"<< endl;
	cout << " rosivania.r1@gmail.com\n"<< endl;
};

int main(int argc, char const *argv[]){
	int op,qtd;
	
	presentation(); //Presentation of the developer

	do{
		cout << "\n Arvore Binaria {binary tree}" << endl;
		
		cout << "\n [1] Inserir Pessoa {Insert} \n [2] Mostrar Pre Ordem {pre-order} \n [3] Mostrar em Ordem {in-order} \n [4] Mostrar Pos Ordem {post-order} \n [5] Limpar Arvore {to clean} \n [6] Sair   {EXIT}" << endl;
		
		cout <<"\n Opcao {Option}: _\b";
		cin >> op; 
	 	//system("cls"); 	// this works only on Windows plataform
	 	system("clear"); 	// this works only on Posix plataform (Unix: FreeBSD, Linux [Debian, Ubuntu, Red Hat, Fedora, Suse etc] and MacOS)
	
		switch(op){

			case 1:{
				cout <<"\n Quantidade de pessoas a serem inseridas: _\b";
				cin >> qtd;
				for(int i=0;i<qtd;i++){
					inserir();
					system("clear");
				}
				break;
			}

			case 2:{
				cout << "Pre Ordem {pre-order}" << endl;
				raiz->mostrarPreOrdem();	
				break;
			}

			case 3:{
				cout << "In-Ordem {in-order}" << endl;
				raiz->mostrarEmOrdem();
				break;
			}
			case 4:{
				cout << "Pos Ordem {post-order}" << endl;
				raiz->mostrarPosOrdem();
				break;
			}
			case 5:{
				raiz->limpar();
				break;
			}
			case 6:{
				break;
			}
		} //end of the switch case
	
	}while (op != 6); //end of the while [exit]
}


