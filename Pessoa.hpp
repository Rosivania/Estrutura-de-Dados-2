#include <iostream>
#include <string>
using namespace std;

class Pessoa{
  protected:
    string nome;
    int idade;
    Pessoa *filhoEsquerda;
    Pessoa *filhoDireita;
  public:
    //construtor
    Pessoa(){
      nome="";
      idade=0;
      filhoDireita=NULL;
      filhoEsquerda=NULL;
    };

    Pessoa(string nm, int id){
      nome = nm;
      idade=id;
      filhoDireita=NULL;
      filhoEsquerda=NULL;
    };

    ~Pessoa(){
      cout << "Removendo " << nome << endl <<endl;
    };

    string getNome(){
      return nome;
    };

    void setNome(string nm){
      nome=nm;
    };

    int getIdade(){
      return idade;
    };

    void setIdade(int id){
      idade =id;
    };

    void addPessoa(Pessoa *novo){
      if(novo->idade >= this->idade){ //add direita
        if (this->filhoDireita==NULL) {
            this->filhoDireita=novo;
        }else{
          this->filhoDireita->addPessoa(novo) ;
        }
      }else{
          if (this->filhoEsquerda==NULL) {
              this->filhoEsquerda=novo;
          }else{
            this->filhoEsquerda->addPessoa(novo) ;
          }
      }
    };
    void mostrarPreOrdem(){
     
      cout << "idade: " << this->getIdade()<< endl;
      
      if(this->filhoEsquerda != NULL) {
        this->filhoEsquerda->mostrarPreOrdem();
      }

      if(this->filhoDireita != NULL) {
        this->filhoDireita->mostrarPreOrdem();
      }
    };
  
    void mostrarEmOrdem(){
      if(this->filhoEsquerda != NULL){
        this->filhoEsquerda->mostrarEmOrdem();
      }
      
      cout << "idade: " << this->getIdade()<< endl;

      if(this->filhoDireita != NULL){
        this->filhoDireita->mostrarEmOrdem();
      }
    };
  
    void mostrarPosOrdem(){
      if(this->filhoEsquerda != NULL)
      {
        this->filhoEsquerda->mostrarPosOrdem();
      }
      if(this->filhoDireita != NULL)
      {
        this->filhoDireita->mostrarPosOrdem();
      }
      cout << "idade: " << this->getIdade()<< endl;
    }; 

   void limpar(){
      if(this->filhoEsquerda != NULL)
      {
      this->filhoEsquerda->limpar();
      }
      if(this->filhoDireita != NULL)
      {
      this->filhoDireita->limpar();
      }
      delete this;
    }; 
};
