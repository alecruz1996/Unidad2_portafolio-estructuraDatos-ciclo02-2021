#include <iostream>
#include <array>
using namespace std;

int main() {
array<int,5> numeros = {3,5,1,4,2}; 
int valorBuscado = 4; 
cout << valorBuscado << endl; 
int indice = -1;

for (int i = 0; i <= numeros.size(); i++){
cout << "Indice actual: " << i << " Valor: " << numeros[i] << endl;
if(numeros[i] == valorBuscado) {
indice = i;
cout << "Encontrado: " << indice << endl;
break;
}
}

cout << "Indice del valor "  << valorBuscado << " :" << indice << endl;
return 0;

}

