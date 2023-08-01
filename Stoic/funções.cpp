#include<cmath>


double Calcular_verto(int a, int b)
{
	double vetor = sqrt(pow(a, 2) + pow(b, 2));

	return vetor;

}


double calcular_angulo(int x, int y)
{
	double pi = 3.14159;
	double angulo_radiano = atan2(y, x);

	double angulo_graus = (angulo_radiano * 180) / pi;

	return angulo_graus;
}