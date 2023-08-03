#include <iostream>
using namespace std;

float calcular_consumo(float,float);

int main()
{
	float distancia, combustivel;

	cout << "Distancia percorrida(km): ";
	cin >> distancia;
	cout << "Litros de combustivel:";
	cin >> combustivel;
	cout << "O consumo de seu carro foi de :"
		<< calcular_consumo(distancia, combustivel)
		<< "km / litro";


}

float calcular_consumo(float distancia, float combustivel)
{
	float consumo = distancia / combustivel;

	return consumo ;
}