/*Universidade Federal do Rio de Janeiro
 * Departamento de Engenharia Eletrônica e de Computação
 * Lingaguens de Programação
 * Professor Miguel Campista
 * Periodo 2017.2
 * Autor: Felipe Ferreira da Silva
 * Agenda usando vector
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Agenda {
	public:
		Agenda (int = 3);
		void getNames ();
		void setNames ();
	private:
		unsigned maxNames;
		void testSizeName(string *);
		vector<string> mNames;
};
