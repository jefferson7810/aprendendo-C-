#include <iostream>
#include <cmath>

using namespace std;
 
double Calcular_verto(int, int); // (x,y);

int main()
{
	int x, y;


	cout << "Digite as cordenadas do vertor:" << endl;
	cout << "x:";
	cin >> x;
	cout << "y:";
	cin >> y;

	cout << "o tamanho do verto e ";
	cout << Calcular_verto(x, y);

	return 0;


}

double Calcular_verto(int a, int b)
{
	double vetor = sqrt(pow(a, 2) + pow(b, 2));

	return vetor;


}
