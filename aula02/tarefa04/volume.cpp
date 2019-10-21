/*Universidade Federal do Rio de Janeiro
* Departamente de Engenharia Eletrônica
* Linguagens de Programação 2017-2
* Aluno: Felipe Ferreira da Silva
* Agenda
*/

#include <iostream>
#include "volume.h"

#define OK			0

using namespace std;

int main (){
	Volume paralelepipedo (1, 1 ,1);
	char resposta;
	int altura;
	int largura;
	int comprimento;

	cout << "O que deseja fazer?" << endl;
	cout << "'c'= calcular "<< endl;
	cout << "'a' = alterar "<<endl; 
	cin >> resposta;
	if ((resposta != 'c') && (resposta != 'a')){
		cout << "Argumento invalido "<< endl;
		return OK;
	}
	if (resposta == 'c')
		cout <<" O volume é " << paralelepipedo.getVolume() << endl;
	else {
		cout << "altura: " << endl;
		cin >> altura;
		cout << "largura: " << endl;
		cin >> largura;
		cout << "comprimento "<< endl;
		cin >> comprimento;
		paralelepipedo.setVolume(altura, largura, comprimento);
		cout << "Volume é " << paralelepipedo.getVolume() << endl;
	}
	return OK;
}

