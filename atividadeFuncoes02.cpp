#include <iostream>
using namespace std;

int conferePar(int num){
    return num % 2 == 0;
}

int main(){

    int num;

    cout << "Digite um número para conferir se é par: ";
    cin >> num;

    if(conferePar(num)){
        cout << num << " É par" << endl; 
    } else {
        cout << num << " É ímpar" << endl;
    }

    return 0;
}