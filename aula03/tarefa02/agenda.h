/*Universidade Federal do Rio de Janeiro
 * Departamento de Engenharia Eletrônica e de Computação
 * Lingaguens de Programação
 * Professor Miguel Campista
 * Periodo 2017.2
 * Autor: Felipe Ferreira da Silva
 * Agenda usando array de Strings
 */

#include <iostream>
#include <string>

#define MAX_NAMES			3

using namespace std;

class Agenda {
	public:
		void getNames ();
		void setNames ();
	private:
		static const unsigned maxNames = MAX_NAMES;
		static unsigned numNames;
		string mNames[maxNames];

		void testSizeName(string *);
};
