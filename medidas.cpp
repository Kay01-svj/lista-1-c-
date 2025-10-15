#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    
    cout << "Digite a medida A: ";
    cin >> a;
    cout << "Digite a medida B: ";
    cin >> b;
    cout << "Digite a medida C: ";
    cin >> c;
    
    double areaQuadrado = pow(a, 2);
    double areaTriangulo = (a * b) / 2;
    double areaTrapezio = ((a + b) * c) / 2;
    
    cout << fixed << setprecision(4);
    cout << "QUADRADO = " << areaQuadrado << endl;
    cout << "TRIANGULO = " << areaTriangulo << endl;
    cout << "TRAPEZIO = " << areaTrapezio << endl;
    
    return 0;
}