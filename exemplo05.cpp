#include <iostream>
using namespace std;

double celsiusParaFahrenheit(double celsius){
    return (celsius * 9 / 5) + 32;
}

int main(){

    double celsiusTemp;

    cout << "Digite a temperatura em °C: ";
    cin >> celsiusTemp;

    cout << "A temperatura é: " << celsiusParaFahrenheit(celsiusTemp) <<endl;

    return 0;
}