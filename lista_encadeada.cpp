#include <stdio.h>
#include <stdlib.h> 

struct No{ //Lista declaration
	int valor;
	struct No *prox;
};

struct No *Lista;

// comentar a função: O que ela recebe? O que ela faz? O que ela retorna?
int inserir(int preco) {
	struct No *aux = (struct No *) malloc (sizeof (struct No));
	aux->valor = preco;
	aux->prox = Lista;
	Lista = aux;
	return 0;
}

int remover(int preco) {
	struct No *aux = Lista;
	struct No *ant = NULL;
	if(aux == NULL) {
		return 1;
	} else {
		while (aux != NULL) {
			if (aux->valor == preco) {
				if (aux == Lista) {
					Lista = aux->prox;
				} else {
					ant->prox= aux-> prox;
				}
				return 0;
				break;
			} else {
				ant = aux;
				aux = aux ->prox;
			}
		}
	}
}

void presentation(){
	printf ("\nUnivesidade Federal do Tocantins");
	printf ("\nCampus Universitario de Palmas");
	printf ("\nCoordenacao de Ciencia da Computacao");
	printf ("\nEstrutura de Dados II");
	printf ("\nProf. MSc. Thiago Magalhaes de Brito Rodrigues");
	printf ("\nRosivania Rodrigues Batista");
	printf ("\nrosivania.r1@gmail.com\n");
}

int main (void) {
	Lista = NULL;
	int opcao;
	int preco;
 
 	presentation(); //Presentation of the developer
 
	do {
		printf ("\nLISTA ENCADEADA DINAMICA {Dynamic Linked List}\n");
		printf ("\n(Valores Inteiros {Integers values})\n");
		
		printf ("\n [1] Inserir valor {Insert value}");
		printf ("\n [2] Remover valor {Remove value}");
		printf ("\n [3] Buscar valor  {Search value}");
		printf ("\n [4] SAIR	   {EXIT}\n\n");
		
		printf ("\n Opcao {Option}: _\b");
		
		scanf ("%d", &opcao);
	 	system("cls"); 		// this works only on Windows plataform
	 	//system("clear"); 	// this works only on Posix plataform (Unix: FreeBSD, Linux [Debian, Ubuntu, Red Hat, Fedora, Suse etc] and MacOS)

		switch (opcao) {
			
			case 1: {
				printf("\n[1] Valor {Value}: ");
				scanf("%d", &preco);
				inserir(preco);
				printf("\nSUCESSFUL! Valor adicionado {Added value}.\n\n\n");
				break;
			}
			case 2: {
				printf("\n[2] Valor {Value}: ");
				scanf("%d", &preco);
				if(remover(preco) == 0) {
					printf("\nSUCESSFUL! Valor removido {Removed value}.\n\n\n");
				} else {
					printf ("\nValor INEXISTENTE {Nonexistent value} \n\n\n");
				}
				break;
			}
		    case 3: {
				bool verify = false; // verify if the number exists in the list
				
				printf("\n[3] Valor {Value}: ");
				scanf("%d", &preco);

				struct No *aux = Lista;
				
				if(aux == NULL) {
					printf("\nValor INEXISTENTE {Nonexistent value} \n\n\n");
				} else {
					while (aux != NULL) {
						if(aux->valor == preco) {
							printf ("\nValor EXISTENTE {Existent value}: %d \n\n\n", preco);
							verify = true;
						}
						aux = aux->prox;
					}
					if (verify == false) {
						printf ("\nValor INEXISTENTE {Nonexistent value} \n\n\n");
					}
				}
				break;
			}
		    case 4: {
		        break;
			}
			case 5: {
				char sair;
				while(sair!='e'){
					printf("\n[1] Valor {Value}: ");
					scanf("%d", &preco);
					if(sair!='e'){
						printf("%d",preco);	
					}
					sair= preco;
					
										
				}
				break;	
			}
		} //end of the switch case
	} while (opcao != 4); //end of the while [exit]
}
