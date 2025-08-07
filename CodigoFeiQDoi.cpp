#include <iostream>
#include <string>
using namespace std;

void f(string a, int b, string c, float d, bool e) {
        if (a != "") {
                cout << "Nome: " << a << endl;
                if (b > 18) {
                        cout << "Maior de idade" << endl;
                        if (e) {
                                cout << "Ativo" << endl;
                                if (c != "") {
                                        cout << "Produto: " << c << endl;
                                        if (d > 0) {
                                                cout << "Valor: " << d << endl;
                                                if (d > 1000) {
                                                        cout << "Produto caro" << endl;
                                                        if (d > 5000) {
                                                                cout << "Muito caro" << endl;
                                                                if (c == "Notebook") {
                                                                        cout << "É um notebook caro" << endl;
                                                                } else {
                                                                        cout << "Não é notebook" << endl;
                                                                }
                                                        }
                                                }
                                        }
                                } else {
                                        cout << "Sem produto" << endl;
                                }
                        } else {
                                cout << "Inativo" << endl;
                        }
                } else {
                        cout << "Menor de idade" << endl;
                }
        } else {
                cout << "Sem nome" << endl;
        }
}

int inutil() {
        return 0;
        cout << "Nunca aparece" << endl;
}

void confusa(bool x, bool y, bool z, bool w) {
        if (x) {
                if (y) {
                        if (z) {
                                if (w) {
                                        cout << "Tudo verdadeiro" << endl;
                                } else {
                                        cout << "W falso" << endl;
                                }
                        } else {
                                cout << "Z falso" << endl;
                        }
                } else {
                        cout << "Y falso" << endl;
                }
        } else {
                cout << "X falso" << endl;
        }
}

int main() {
        string nome = "Maria";
        int idade = 30;
        string produto = "Notebook";
        float valor = 7000.0;
        bool ativo = true;

        // Comentários inúteis
        int a = 1; // valor 1
        int b = 2; // valor 2
        int c = a + b; // soma
        cout << c << endl; // imprime

        f(nome, idade, produto, valor, ativo);

        string nome2 = "Maria";
        int idade2 = 30;
        string produto2 = "Notebook";
        float valor2 = 7000.0;
        bool ativo2 = true;

        f(nome2, idade2, produto2, valor2, ativo2);

        confusa(true, true, false, true);

        return 0;
}
