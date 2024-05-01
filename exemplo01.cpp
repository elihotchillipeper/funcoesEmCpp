#include <iostream>
using namespace std;

int calcularAreaQuadrado(int lateral){
    return lateral * lateral;
}

int main(){

    int lado;

    cout << "Digite o valor da lateral de um quadrado: ";
    cin >> lado;

    int area = calcularAreaQuadrado(lado);

    cout << "A área do quadrado é: " << area <<endl;

    return 0;
}