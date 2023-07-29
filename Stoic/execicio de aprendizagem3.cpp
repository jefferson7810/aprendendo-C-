#include<iostream>
using namespace std;

void calcular_media();


int valor_1, valor_2;

int main()
{

	cout << "Digite o valor inteiro:" << endl;
	cin >> valor_1;

	cout << "Digite outro valor inteiro:" << endl;
	cin >> valor_2;

	calcular_media();
}

void calcular_media()
{
	float media;
	
	media = valor_1 + valor_2;

	cout << media / 2;
}
