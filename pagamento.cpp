#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string nomeFuncionario;
    double valorHora;
    int horasTrabalhadas;
    
    cout << "Nome: ";
    cin.ignore();
    getline(cin, nomeFuncionario);
    cout << "Valor por hora: ";
    cin >> valorHora;
    cout << "Horas trabalhadas: ";
    cin >> horasTrabalhadas;
    
    double pagamento = valorHora * horasTrabalhadas;
    cout << "O pagamento para " << nomeFuncionario << " deve ser " << fixed << setprecision(2) << pagamento << endl;
    
    return 0;
}