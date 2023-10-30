// PRACTICA11.cpp :#include <iostream>

#include <iostream>
#include <string>

using namespace std;

int main() {
    int NUM, I, RESUL;
    string linea;
    cout << "DIGITE NUMERO: ";
    getline(cin, linea);
    NUM = stoi(linea);
    I = 1;
    while (I <= 12) {
        RESUL = NUM * I;
        cout << NUM << " * " << I << " = " << RESUL << endl;
        I = I + 1;
    }
    cout << "Pulse una tecla: ";
    getline(cin, linea);
    return 0;
}