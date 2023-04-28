#include <iostream>
using namespace std;

int Menu() {
	cout << "\nMenu" << endl << "----------------------------------------\n1. Ordenamiento y omisión en arreglos" << endl << "2. Factoriales y figuras" << endl << "----------------------------------------" << endl << "Ingrese la Opcion: ";
	return 0;
}
int random() {
	return 97 + rand() % (26);
}
int Factorial(int n) {
	if (n > 1)
	{
		return n * Factorial(--n);
	}
	return 1;
}
int main()
{
	srand(time(NULL));
	int opcion = 1;

	while (opcion != 0)
	{
		Menu();
		cin >> opcion;
		switch (opcion) {
		case 0:
			cout << "Saliendo";
			break;
		case 1:
			//97-122
			char arregloOriginal[10];
			for (size_t i = 0; i < 10; i++)
			{
				arregloOriginal[i] = random();
			}
			cout << "Arreglo Original: ";
			for (size_t i = 0; i < 10; i++)
			{
				cout << arregloOriginal[i] << " ";
			}
			cout << endl;
			char arregloArreglado[10];
			int n;
			n = 0;
			for (int j = 97; j <= 122; j++) {
				for (size_t k = 0; k < 10; k++)
				{
					if (arregloOriginal[k] == j)
					{
						arregloArreglado[n] = arregloOriginal[k];
						n++;
						break;
					}
				}
			}
			cout << "Arreglo Ordenado: ";
			for (size_t i = 0; i < 10; i++)
			{
				cout << arregloArreglado[i] << " ";
			}
			break;
		case 2:
			int c;
			cout << "Ingrese el numero a sacar el factorial: ";
			cin >> c;
			int factC;
			factC = Factorial(c + 1);
			cout << "El factorial de " << c << " es " << factC << endl;
			for (size_t i = 1; i <= factC; i++)
			{
				for (size_t j = 1; j <= i; j++)
				{
					cout << "*";
				}
				cout << endl;
			}
			break;
		default:
			cout << "Opcion no valida" << endl;
			break;
		}
	}
}