#include <iostream>
#include <iomanip>
using namespace std;

void imprimirArreglo(int[][3], int, int); // Prototipo de Funcion a ser definida posteriormente

int main(int argc, const char * argv[]){
	int arreglo1[2][3] = {{1,2,3}, {4,5,6}};
	int arreglo2[2][3] = {1,2,3,4,5,6};
	int arreglo3[2][3] = {{1,2}, {4}};
	
	cout << "Los valores del arreglo 1 son: " <<endl;
	imprimirArreglo(arreglo1, 2, 3);
	
	cout << "Los valores del arreglo 2 son: " <<endl;
	imprimirArreglo(arreglo2, 2, 3);
	
	cout << "Los valores del arreglo 3 son: " <<endl;
	imprimirArreglo(arreglo3, 2, 3);
	
	arreglo3[0][2] = 3;
	arreglo3[1][1] = 5;
	arreglo3[1][2] = 6;
	
	cout << "Los valores del arreglo 3 son: " << endl;
	imprimirArreglo(arreglo3, 2, 3);
	
	return 0;
}

void imprimirArreglo(int arr[][3], int filas, int columnas){
	for(int i = 0; i < filas; i++){
		for(int j = 0; j < columnas; j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
