#include <iostream>

using namespace std;

int main() {
    int opcion = 0;
    int num1, num2;

    while (opcion != 5) {
        cout << "1. Sumar\n";
        cout << "2. Restar\n";
        cout << "3. Multiplicar\n";
        cout << "4. Dividir\n";
        cout << "5. Salir\n";
        cout << "Elija una opción: ";
        cin >> opcion;

        if (opcion >= 1 && opcion <= 4) {
            cout << "Ingrese dos números: ";
            cin >> num1 >> num2;
        }

        switch(opcion) {
            case 1:
                cout << "Resultado: " << num1 + num2 << endl;
                break;
            case 2:
                cout << "Resultado: " << num1 - num2 << endl;
                break;
            case 3:
                cout << "Resultado: " << num1 * num2 << endl;
                break;
            case 4:
                if (num2 != 0)
                    cout << "Resultado: " << num1 / num2 << endl;
                else
                    cout << "Error: No se puede dividir por cero." << endl;
                break;
            case 5:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opción no válida." << endl;
        }

        cout << endl;
    }

    return 0;
}