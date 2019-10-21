/*Universidade Federal do Rio de Janeiro
* Departamente de Engenharia Eletrônica
* Linguagens de Programação 2017-2
* Aluno: Felipe Ferreira da Silva
* Distancia entre pontos
*/

#include <iostream>
#include <cmath>
#include "distancia.h"

using namespace std;

Ponto::Ponto (){
	setX(0); setY(0); setZ(0);
}
void Ponto::setX(double x){
	mX = x;
}
void Ponto::setY(double y){
	mY = y;
}
void Ponto::setZ(double z){
	mZ = z;
}
double Ponto::getX(){
	return mX;
}
double Ponto::getY(){
	return mY;
}
double Ponto::getZ(){
	return mZ;
}
Distancia::Distancia (){
	mDistancia = 0;
}
void Distancia::setCoordenadas (double xA, double yA, double zA, double xB, double yB, double zB){
	a.setX(xA); a.setY(yA); a.setZ(zA);
	b.setX(xB); b.setY(yB); b.setZ(zB);
}
void Distancia::getCoordenadas (){
	cout << "Pont A (" 
		<< a.getX() << ", "
		<< a.getY() << ", "
		<< a.getZ() << ")" << endl;
	cout << "Ponto B ("
		<< b.getX() << ", "
		<< b.getY() << ", "
		<< b.getZ() << ")" << endl;
}
void Distancia::setDistancia (){
	mDistancia = sqrt(pow(a.getX() - b.getX(), 2) + pow(a.getY() - b.getY(), 2) + pow(a.getZ() - b.getZ(), 2));
}
double Distancia::getDistancia (){
	setDistancia();
	return mDistancia;
}
