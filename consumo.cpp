#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double distancia, combustivel;
    
    cout << "Distancia percorrida: ";
    cin >> distancia;
    cout << "Combustivel gasto: ";
    cin >> combustivel;
    
    double consumoMedio = distancia / combustivel;
    cout << "Consumo medio = " << fixed << setprecision(3) << consumoMedio << endl;
    
    return 0;
}