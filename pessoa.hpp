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
      cout << "Apresentando uma pessoa" << endl <<endl;
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
