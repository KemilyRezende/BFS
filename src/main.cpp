#include <iostream>
#include "Fila.hpp"
#include "CaminhoBFS.hpp"
#include <locale.h>

using namespace std;

int main(){
	int lin, col;
	setlocale (LC_ALL, "Portuguese");
	cout << "Quantas Linhas h� no mapa(matriz)?\n";
	cin >> lin;
	cout << "Quantas Colunas h� no mapa(matriz)?\n";
	cin >> col;
	CaminhoBFS(lin, col);
	return 0;
}
