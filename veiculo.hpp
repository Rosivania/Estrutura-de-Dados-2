#include <iostream>
#include <string>
using namespace std;

class veiculo{
  protected:
    string marca;
    string modelo;
    float preco;
  private:
    int teste;
  public:
    //construtor
    veiculo(){
      marca="";
      modelo="";
      preco=0.0;
    };
    //construtor com parametros - polimorfismo do
    veiculo(string mc, string md,float pr){
      marca = mc;
      modelo=md;
      preco=pr;

    };
    ~veiculo(){
      cout << "Veiculo sendo desmontado" << endl <<endl;
    };
    string getMarca(){
      return marca;
    };
    void setMarca(string mc){
      marca=mc;
    };
    string getModelo(){
      return modelo;
    };
    void setModelo(string md){
      modelo=md; 
    };
    float getPreco(){
      return preco;
    };
    void setPreco(float pr){
      preco=pr; 
    };
    int getTeste(){
      return teste;
    };
    void setTeste(int ts){
      teste =ts;
    };
    bool andar (int velocidade){
      return true;
    };
    
};
class Carro:public veiculo{
    private:
      int tipoCambio; 
      int numeroAssentos;

    //metodo da classe 
    public:
      //construtor
      Carro(){

      };
      //construtor com parametros
      Carro(string mc, string md, float pr, int tc, int nc){
        marca=mc;
        modelo=md;
        preco=pr;

        tipoCambio =tc;
        numeroAssentos =nc;
      };
      ~Carro(){

      };
      int getTipoCambio(){
        return tipoCambio;
      };
      void setTipoCambio(int tc){
        tipoCambio=tc;
      };
      int getNumeroAssentos(){
        return numeroAssentos;
      };
      void setNumeroAssentos(int nc){
        numeroAssentos =nc;
      };
    };
