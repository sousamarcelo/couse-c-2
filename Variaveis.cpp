#include <iostream>
#include <tchar.h>

int main() {

	_tsetlocale(LC_ALL, _T("portuguese")); //configuração de idiama para que possa ser utilizado acentos por exemplo na "Pontuação"

	int numVidas = 5;
	int pontuacao = 1350;
	std::cout << "************ INICIO DO JOGO ******************" << std::endl;
	std::cout << "Vidas jogador: " << numVidas << std::endl;
	std::cout << "Pontuação: " << pontuacao << std::endl;	
	std::cout << "Endereço de memoria ram de numVidas: " << &numVidas << "\n";
	std::cout << "Endereço de memoria ram de pontuacao: " << &pontuacao << "\n";
	std::cout << "******************************" << std::endl;

	std::cout << "************ DURANTE O JOGO ******************" << std::endl;
	pontuacao += 150;
	numVidas -= 1;
	std::cout << "Vidas jogador: " << numVidas << std::endl;
	std::cout << "Pontuação: " << pontuacao << std::endl;

	system("PAUSE");
}