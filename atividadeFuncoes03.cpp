#include <iostream>
using namespace std;
 
int calculaFatorial(int num){
    int resultado = 1;
    for(int i = 1; i <= num; i++){
        resultado *= i;
    }
    return resultado;
}

int main(){

    int num;

    cout << "Digite um número: ";
    cin >> num;

    cout << "O fatorial de " << num << " é " << calculaFatorial(num) << endl;
    
    return 0;
    }