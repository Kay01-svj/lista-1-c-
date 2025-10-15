#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double raio;
    
    cout << "Digite o valor do raio do circulo: ";
    cin >> raio;
    
    double area = 3.14159 * pow(raio, 2);
    cout << "AREA = " << fixed << setprecision(3) << area << endl;
    
    return 0;
}