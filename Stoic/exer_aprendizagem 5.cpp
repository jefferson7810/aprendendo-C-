#include<iostream>
#include<cmath>

using namespace std;

void Absoluto();

int main()
{
	Absoluto();

	

}
 

void Absoluto()
{
	double numero;

	cout << "Digite um numero inteiro:";
	cin >> numero;

	numero = pow(numero, 2);
	numero = sqrt(numero);

	cout << "O valor absoluto e " << numero << ".";

	

}