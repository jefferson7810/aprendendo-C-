#include<iostream>
using namespace std;

float cubo(float);
float quadrado(float);

int main()
{
	double valor;

	cout << "Digite o valor:";
	cin >> valor;

	cout << "Quadrado = " << quadrado(valor) << endl;
	cout << "Cubo = " << cubo(valor) << endl;
	cout << "cubo do quadrado = " << cubo(quadrado(valor));

}


float cubo(float a)
{
	return a * a * a;
}


float quadrado(float n)

{
	return n * n;
}