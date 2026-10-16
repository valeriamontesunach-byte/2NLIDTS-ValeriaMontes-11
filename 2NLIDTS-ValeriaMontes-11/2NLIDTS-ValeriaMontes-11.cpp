// 2NLIDTS-ValeriaMontes-11.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int sumarDigitosRecursivo(int numero) {
    if (numero <= 9) {
        return numero;
    }
    return (numero % 10) + sumarDigitosRecursivo(numero / 10);
}

int sumarDigitosIterativo(int numero) {
    int sumaTotal = 0;
    while (numero > 0) {
        sumaTotal += numero % 10;
        numero /= 10;
    }
    return sumaTotal;
}

int main() {
    int cantidadNumeros;

    cout << "Suma de Digitos" << endl;
    cout << "Cuantos numeros quieres ingresar ";
    cin >> cantidadNumeros;

    for (int i = 1; i <= cantidadNumeros; i++) {
        int numeroIngresado;

        cout << "Numero " << i << " de " << cantidadNumeros << ": ";
        cin >> numeroIngresado;

        int numeroPositivo = abs(numeroIngresado);

        int resultadoRecursivo = sumarDigitosRecursivo(numeroPositivo);
        int resultadoIterativo = sumarDigitosIterativo(numeroPositivo);

        cout << "  > Suma de digitos (Recursiva): " << resultadoRecursivo << endl;
        cout << "  > Suma de digitos (Iterativa): " << resultadoIterativo << endl;
    }

    cout << "\nProceso finalizado" << endl;
    return 0;
}
