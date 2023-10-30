#include <iostream>
using namespace std;

int sumaRecursiva(int n) {
	if (n <= 9)
		return n;
	else
		return sumaRecursiva(n / 10) + n % 10;
}

int main() {
	int n;
	cout << "Ingresa un número entero: ";
	cin >> n;

	int resultado = sumaRecursiva(n);
	cout << "La suma de los dígitos es:" << resultado << endl;

	return 0;
}