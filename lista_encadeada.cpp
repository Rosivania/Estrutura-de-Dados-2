#include <stdio.h>
#include <stdlib.h>

void presentation(){
	printf ("\nUnivesidade Federal do Tocantins");
	printf ("\nCampus Universitario de Palmas");
	printf ("\nCoordenacao de Ciencia da Computacao");
	printf ("\nEstrutura de Dados II");
	printf ("\nProf. MSc. Thiago Magalhães de Brito Rodrigues");
	printf ("\nRosivania Rodrigues (rosivania.r1@gmail.com)\n");
}
 
//declaracao da lista
struct No{
	int valor;
	struct No * prox;
};
 
struct No * Lista;

int main (void) {
	Lista = NULL;
	int opcao;
	int preco;
 
 	presentation();
 
	do {
		printf ("\nLISTA ENCADEADA DINAMICA\n");
		
		printf ("\n [1] Inserir valor na lista");
		printf ("\n [2] Remover valor da lista");
		printf ("\n [3] Buscar valor na lista");
		printf ("\n [4] SAIR \n\n");
		
		printf ("\n Opcao _\b");
		
		scanf ("%d", &opcao);
	 
		switch (opcao) {
			
			case 1: {
				printf ("\n Digite o preco: ");
				scanf ("%d", &preco);
				
				struct No * aux= (struct No *) malloc (sizeof (struct No));
				aux -> valor = preco;
				aux-> prox = Lista;
				Lista =aux;
				
				printf ("\n preco adicionado! \n");
				break;
			}
			case 2: {
				printf ("\n preco a ser removido");
				scanf ("%d", &preco);
				
				struct No * aux;
				struct No * ant;
				
				aux = Lista;
				ant = NULL;
               
				while (aux != NULL) {
					
						if (aux->valor == preco) {
							if (aux == Lista) {
								Lista = aux->prox;
							} else {
								ant->prox= aux-> prox;
							}
							printf ("\n Removido com sucesso!");
							break;
						} else {
							ant = aux;
							aux = aux ->prox;
						}
					 
				}
				break;
			}
		      case 3: { 
				int vlbusca;
				printf("digite o valor da busca:");
				scanf("%d",&vlbusca);

				struct No * aux;
				aux= Lista;
				while (aux != NULL) {
					if(aux->valor == vlbusca) {
						printf ("\n o valor existe: %d", vlbusca);
					} else {
						printf ("\n o valor nao existe: %d", vlbusca);
					}
					aux = aux -> prox;
				}
				break;
			}
		    case 4: {
		        break;
			}
		} //fim do switch case
	system("clear");
	} while (opcao != 4); // fim do while [encerrar]
}
