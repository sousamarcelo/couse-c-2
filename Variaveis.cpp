#include <iostream>
#include <tchar.h>

int main() {

	_tsetlocale(LC_ALL, _T("portuguese")); //configura��o de idiama para que possa ser utilizado acentos por exemplo na "Pontua��o"

	int numVidas = 5;
	int pontuacao = 1350;
	std::cout << "************ INICIO DO JOGO ******************" << std::endl;
	std::cout << "Vidas jogador: " << numVidas << std::endl;
	std::cout << "Pontua��o: " << pontuacao << std::endl;	
	std::cout << "Endere�o de memoria ram de numVidas: " << &numVidas << "\n";
	std::cout << "Endere�o de memoria ram de pontuacao: " << &pontuacao << "\n";
	std::cout << "******************************" << std::endl;

	std::cout << "************ DURANTE O JOGO ******************" << std::endl;
	pontuacao += 150;
	numVidas -= 1;
	std::cout << "Vidas jogador: " << numVidas << std::endl;
	std::cout << "Pontua��o: " << pontuacao << std::endl;

	system("PAUSE");
}