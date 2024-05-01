#include <iostream>
using namespace std;

bool ehPar(int num){
    return num % 2 == 0;
}

int main(){

    int numero;

    cout << "Digite um número: ";
    cin >> numero;

    /*cout << numero << " é " << ehPar(numero) ?  "par" : "ímpar"; */

    if(ehPar(numero)){
        cout << numero << " é par." << endl;
    } else {
        cout << numero << " é ímpar." << endl;
    }


    return 0;
}