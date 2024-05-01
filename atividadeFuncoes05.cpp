#include <iostream>
using namespace std; 

int confereMaior(int num1, int num2){
    if(num1 < num2) return false;
    }


int main(){

    int num1, num2;

    cout << "Digite dois números e veja qual é maior: ";
    cin >> num1 >> num2;

    if(confereMaior(num1, num2)){
        cout << num1 << " é menor que " << num2 << endl;
    } else if (confereMaior(num2, num1)){
        cout << num2 << " é menor que " << num2 << endl;
    } else {
        cout << num1 << " e " << num2 << " são iguais." << endl;
    }

    return 0;
}