/*Universidade Federal do Rio de Janeiro
 * Departamente de Engenharia Eletrônica
 * Linguagens de Programação 2017-2
 * Aluno: Felipe Ferreira da Silva
 * Calculo de Fibonacci com classe
 */

#include "fibonacci-cc.h"

void Fibonacci::setOrdem (int ordem){
	calcularFibonacci(ordem);
}

int Fibonacci::getNumero (){
	return numero;
}

void Fibonacci::calcularFibonacci (int ordem){
	int primeiroTermo = 0;
	int segundoTermo = 1;

	if (ordem > 1){
		for (int n = 1; n < ordem; n++){
			numero = primeiroTermo + segundoTermo;
			primeiroTermo = segundoTermo;
			segundoTermo = numero;
		}
	} else {
		numero = ordem;
	}
}
