#include <iostream>
#ifndef __Posicao__HPP
#define __Posicao__HPP

using namespace std;

class Posicao{
	private:
		int lin;
		int col;
		int value;
		bool added;
		Posicao* prox;
	public:
		void setPosicao(int lin, int col);
		void setValue(char value);
		char getValue();
		int Linha();
		int Coluna();
		void setProx(Posicao* p);
		Posicao* obterProx();
		void setAdded(bool added);
		bool getAdded();
		
};

#endif
