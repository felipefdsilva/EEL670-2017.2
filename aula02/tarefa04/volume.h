/*Universidade Federal do Rio de Janeiro
* Departamente de Engenharia Eletrônica
* Linguagens de Programação 2017-2
* Aluno: Felipe Ferreira da Silva
* Volume
*/
class Volume {
	public:
		Volume (int,int,int);
		void setVolume (int, int, int);
		int getVolume ();
	private:
		int altura;
		int largura;
		int comprimento;
		int volume;
};
