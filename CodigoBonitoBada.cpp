#include <iostream>
#include <string>
using namespace std;

void produtos(string nome, int idade, string produto, float preco, bool ativo) {
        if(nome == ""){
                cout << "Sem nome" << endl;
        }
        if(idade < 18){
                cout << "Menor de idade" << endl;
        }
        if(produto==""){
              cout << "Sem produto" << endl;
        }
        if(produto!="Notebook"){
                cout << "Nao e um Notebook" << endl;
        }
        if(valor==0){
                cout << "Sem valor" << endl;
        }
        if(!ativo){
                cout << "Inativo" << endl;
        }

        cout << "Nome: " << nome << endl;
        cout << "Maior de idade" << endl;
        cout << "Ativo" << endl;
        cout << "Produto: " << produto << endl;
        cout << "Valor: " << valor << endl;

        if(valor > 1000 && valor < 5000){
                cout << "Produto caro" << endl;  
        } else if(valor>5000){
                cout << "Muito caro" << endl;
        }
}

int main() {
        string nome = "Maria";
        int idade = 30;
        string produto = "Notebook";
        float preco = 7000;
        bool ativo = true;

        

        produtos(nome, idade, produto, preco, ativo);

        return 0;
}
