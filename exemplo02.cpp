#include <iostream>
using namespace std;


int somar(int a, int b){
    return a + b;
}

int main(){

    int num1, num2;

    cout << "Digite dois números para soma-los: ";
    cin >> num1 >> num2;

    cout << "A soma dos números é " << somar(num1, num2) <<endl;

    return 0;
}