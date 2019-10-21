/*Universidade Federal do Rio de Janeiro
* Departamente de Engenharia Eletrônica
* Linguagens de Programação 2017-2
* Aluno: Felipe Ferreira da Silva
* Agenda
*/

#define NUMERO_COORDENADAS	3

class Ponto {
	public:
		Ponto ();
		void setX(double);
		double getX();
		void setY(double);
		double getY();
		void setZ(double);
		double getZ();
	private:
		double mX;
		double mY;
		double mZ;
};

class Distancia {
	public:
		Distancia ();
		void setCoordenadas (double, double, double, double, double, double);
		void getCoordenadas ();
		void setDistancia ();
		double getDistancia();
	private:
		Ponto a;
		Ponto b;
		double mDistancia;
};
