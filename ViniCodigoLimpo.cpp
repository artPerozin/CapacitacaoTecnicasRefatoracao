#include <iostream>
#include <string>
using namespace std;

void InfoProduto(string nome, int idade, string produto, float preco, bool ativo) {
    
    if(nome != "") cout << "Nome: " << nome << endl;
    else cout << "Sem nome" << endl;

    if(idade > 18) cout << "Maior de Idade" << endl;
    else cout << "Menor de idade" << endl;

    if(ativo){
        cout << "Ativo" << endl;

        if(produto != "") cout << "Produto" << produto << endl;
        else cout << "Sem produto" << endl;

        if(preco > 0){
        cout << "Valor: " << preco << endl;
        
            if(preco > 1000) cout << "Produto caro" << endl;

            else if(preco > 5000){
            cout << "Muito caro" << endl;

            if (produto == "Notebook")cout << "É um notebook caro" << endl;
            else cout << "Não é um notebook" << endl; 
            }
        }
    }
    else cout << "Inativo" << endl;
   
}


int main(){
    string nome = "Maria";
    int idade = 30;
    string produto = "Notebook";
    float valor = 7000.0;
    bool ativo = true;

    InfoProduto(nome, idade, produto, valor, ativo);

    return 0;
}
