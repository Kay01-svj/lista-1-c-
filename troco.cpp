#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double precoUnitario, valorPago;
    int quantidade;
    
    cout << "Preco unitario do produto: ";
    cin >> precoUnitario;
    cout << "Quantidade comprada: ";
    cin >> quantidade;
    cout << "Dinheiro recebido: ";
    cin >> valorPago;
    
    double troco = valorPago - (precoUnitario * quantidade);
    cout << "TROCO = " << fixed << setprecision(2) << troco << endl;
    
    return 0;
}