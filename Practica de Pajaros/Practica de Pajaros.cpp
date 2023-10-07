#include<iostream>
#include<vector>

using namespace std;
int main() {

	//declarar un vector de cadenas

	vector<string> aves = { "loro gris", "paloma diamante", "coctel" };
	cout << "los valores del vector antes de insertar: \n ";
	//itera sobre el vector para imprimir los valores

	for (int i = 0; i < aves.size(); ++i) {

		cout << aves[i] << " ";
	}
	cout << "\n";

	//agrega tres valores al final del vector utilizando push.back()

	aves.push_back("Mayna");
	aves.push_back("Periquitos");
	aves.push_back("Cacatua");
	cout << "los valores del vector despues de insertar: ";
	//itera sobre el vector para imprimir los valores

	for (int i = 0; i < aves.size(); ++i) {
		cout << aves[i] << " ";
	}
	cout << "\n";

	system("PAUSE");

	return 0;

}