/*Universidade Federal do Rio de Janeiro
* Departamente de Engenharia Eletrônica
* Linguagens de Programação 2017-2
* Aluno: Felipe Ferreira da Silva
* Distancia entre pontos
*/

#include <iostream>
#include "distancia.h"

#define OK		0

using namespace std;

int main (){
	double xA, yA, zA;
	double xB, yB, zB;
	Distancia distancia;

	cout << "Insira as coordenadas do ponto A" << endl;
	cout << "x: " << endl;
	cin >> xA;
	cout << "y: " << endl;
	cin >> yA;
	cout << "z: " << endl;
	cin >> zA;
	cout << "Insira as coordenadas do ponto B" << endl;
	cout << "x: " << endl;
	cin >> xB;
	cout << "y: " << endl;
	cin >> yB;
	cout << "z: " << endl;
	cin >> zB;
	
	distancia.getCoordenadas ();
	distancia.setCoordenadas (xA, yA, zA, xB, yB, zB);
	distancia.getCoordenadas ();

	cout << "Distancia: " << distancia.getDistancia() << endl;

	return OK;
}
