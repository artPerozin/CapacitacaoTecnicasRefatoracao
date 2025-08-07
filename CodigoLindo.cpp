#include <iostream>
#include <string>
using namespace std;

void infoProduto(string nome, int idade, string produto, float valor, bool ativo) {

        if(nome == ""){
                cout << "Sem nome" << endl;
                return;
        }
        if(idade < 18){
                cout << "Menor de idade" << endl;
                return;
        }
        if(produto==""){
              cout << "Sem produto" << endl;
              return;
        }
        if(produto!="Notebook"){
                cout << "Nao e um Notebook" << endl;
        }
        if(valor==0.0){
                cout << "Sem valor" << endl;
                return;
        }
        if(!ativo){
                cout << "Inativo" << endl;
                return;
        }

        cout << "Nome: " << nome << endl;
        cout << "Maior de idade" << endl;
        cout << "Ativo" << endl;
        cout << "Produto: " << produto << endl;
        cout << "Valor: " << valor << endl;

        if(valor > 1000.0 && valor < 5000.0){
                cout << "Produto caro" << endl;  
        } else if(valor>5000.0){
                cout << "Muito caro" << endl;
        }
}

int main() {
        string nome = "Maria";
        int idade = 30;
        string produto = "Notebook";
        float valor = 7000.0;
        bool ativo = true;

        infoProduto(nome, idade, produto, valor, ativo);

        return 0;
}
