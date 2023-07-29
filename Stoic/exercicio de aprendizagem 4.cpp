#include<iostream>

using namespace std;

void calcular_volume();

int raio, altura;
double pi=3.14159;

int main() 
{
	cout << "Calcula o volume de um cilindro" << endl;
	cout << "--------------------------------" << endl;
	cout << "Digite o raio do cilindro:" << endl;
	cin >> raio;
	cout << "Digite a altura do cilindro:" << endl;
	cin >> altura;

	calcular_volume();

}

void calcular_volume()
{
	double volume;

	volume = (raio * raio) * pi * altura;
	cout << " O volume do cilindro e: " << volume;
}