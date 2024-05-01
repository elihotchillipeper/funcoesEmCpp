#include <iostream>
using namespace std;

int calcularFatorial(int num){
    int resultado = 1;
    for(int i = 2; i <= num; i++){
        resultado *= i;
    }
    return resultado;
}

int main(){

    int numero;

    cout << "Digite um número para descobrir seu fatorial: ";
    cin >> numero;

    cout << "O fatorial de " << numero << " é: " << calcularFatorial(numero) << endl;

    return 0; 
}