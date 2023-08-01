#include<iostream>
#include<cmath>

using namespace std;

double calcular_angulo(int, int);

double pi = 3.14159;

int main()
{
	int x, y;

	cout << "digite as cordenadas:";
	cout << "x: ";
	cin >> x;
	cout << "y:";
	cin >> y;

	cout << calcular_angulo(x, y);


}

double calcular_angulo(int x, int y)
{
	double angulo_radiano = atan2(y,x);

	double angulo_graus = (angulo_radiano * 180) / pi;

	return angulo_graus;


}