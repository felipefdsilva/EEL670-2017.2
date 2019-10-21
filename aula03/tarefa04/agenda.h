/*Universidade Federal do Rio de Janeiro
 * Departamento de Engenharia Eletrônica e de Computação
 * Lingaguens de Programação
 * Professor Miguel Campista
 * Periodo 2017.2
 * Autor: Felipe Ferreira da Silva
 * Agenda usando vector de objetos da classe Cadastro
 */

#include <iostream>
#include <string>
#include <iomanip>
#include <vector>

#define MAX_CADASTROS			3

using namespace std;

class Cadastro {
	public:
		string getName () const;
		void setName (string);
		string getOccupation () const;
		void setOcuppation (string);
		unsigned getAge () const;
		void setAge (unsigned);
	private:
		string mName;
		string mOccupation;
		unsigned mAge;
};

class Agenda {
	public:
		void insertCad (Cadastro &);
		void showCadastro() const;
	private:
		static const unsigned maxCadastros=MAX_CADASTROS;
		//static unsigned numCadastros;
		void testSizeName(string *);
		vector <Cadastro> mCadastros;
};
