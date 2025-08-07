#include <iostream>
#include <string>
using namespace std;

void cadastro(string nome, int idade, string produto, float valor, bool ativo) {

        if (nome == "") {
                cout << "sem nome" << endl;
                return;
        }
        if (idade < 18) {
                cout << "menor de idade" << endl;
                return;
        }
        if (!ativo) {
                cout << "não é ativo" << endl;
                return;
        }
        if (produto == "") {
                cout << "sem produto" << endl;
                return;
        }
        if(valor<0.0) {
                cout << "valor inexistente" << endl;
                return;
        }

        cout << "Nome: " << nome << endl;
        cout << "Maior de idade" << endl;

        if (valor < 1000.0) {
                cout << "Produto barato" << endl;
        }
        if (valor > 1000.0 && valor < 5000.0) {
                cout << "Produto caro" << endl;
        } else {
                cout << "Muito caro" << endl;
        }                
        cout << "Valor: " << valor << endl;
        if (produto != "Notebook") {
                cout << "Não é notebook" << endl;
        } else if(produto == "Notebook"&& valor > 1000.0){
                cout << "É um notebook caro" << endl;
        }

        return;
}


int main() {
        string nome = "Maria";
        int idade = 30;
        string produto = "Notebook";
        float valor = 7000.0;
        bool ativo = true;

        cadastro(nome, idade, produto, valor, ativo);

        return 0;
}
