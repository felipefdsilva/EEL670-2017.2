/*Universidade Federal do Rio de Janeiro
* Departamente de Engenharia Eletrônica
* Linguagens de Programação 2017-2
* Aluno: Felipe Ferreira da Silva
* Agenda
*/

#include "volume.h"

Volume::Volume (int altura, int largura, int comprimento){
	setVolume(altura, largura, comprimento);
}
void Volume::setVolume (int altura, int largura, int comprimento){
	volume = altura*largura*comprimento;
}
int Volume::getVolume (){
	return volume;
}
