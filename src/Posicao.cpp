#include <iostream>
#include "Posicao.hpp"

using namespace std;

void Posicao::setPosicao(int lin, int col){
	this->lin = lin;
	this->col = col;
}

int Posicao::Linha(){
	return this->lin;
}

int Posicao::Coluna(){
	return this->col;
}

void Posicao::setProx(Posicao* p){
	this->prox = p;
}

Posicao* Posicao::obterProx(){
	return prox;
}

void Posicao::setValue(char value){
	this->value = value;
}

char Posicao::getValue(){
	return this->value;
}
void Posicao::setAdded(bool added){
	this->added = added;
}
bool Posicao::getAdded(){
	return this->added;
}
