#include<iostream>
#define Paes 0.30
#define pasteis 0.25

using namespace std;

int main()
{
	cout << "paes e cia" << endl;
	cout << endl;

	cout << "Quantos paes ? ";
	float quantidade_de_paes;
	cin >> quantidade_de_paes;

	cout << "Quantos pasteis ? ";
	float quantidade_de_pasteis;
	cin >> quantidade_de_pasteis;

	cout << endl;

	cout << "O Total da compra e R$" << 
		(quantidade_de_paes * Paes) + (quantidade_de_pasteis * pasteis);

}
