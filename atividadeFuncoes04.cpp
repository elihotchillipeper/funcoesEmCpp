#include <iostream>
using namespace std;
 
int conferirPrimo(int num){
    if(num <=1) return false;
    for(int i = 2; i * i <= num; i++){
        if( num % i == 0) return false;
    }
    return true;
}

int main(){

    int num;

    cout << "Digite um número: ";
    cin >> num;

    if(conferirPrimo(num)){
        cout << num << " é primo." << endl;
    } else {
        cout << num << " não é primo." << endl;
    }

    return 0;
}