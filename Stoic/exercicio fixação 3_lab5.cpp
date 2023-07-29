#include<iostream>
using namespace std;

float MediaArmonica(float,float);

int main()
{
	float primeiro_numero, segundo_numero;

	cout << "digite o primeiro numero:";
	cin >> primeiro_numero;
	cout << "digite o segundo numero:";
	cin >> segundo_numero;

	cout << "media hamonica dos numeros e "
		<< MediaArmonica(primeiro_numero, segundo_numero);

}

float MediaArmonica(float x, float y)
{
	float resultado = 2 * x * y / (x + y);
	
	return resultado;
}