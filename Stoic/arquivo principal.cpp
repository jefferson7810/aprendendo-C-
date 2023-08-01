#include<iostream>
#include"prototipos.cpp"

using namespace std;

int main()
{
	int x, y;

	cout << "digite as cordenadas do vetor:" << endl;
	cout << "x:";
	cin >> x;
	cout << "y:";
	cin >> y;

	cout << "cordenadas polares do vetor:"<<endl;
	cout << "( "
		<< Calcular_verto(x, y)
		<< " , "
		<< calcular_angulo(x, y)
		<< ")";
}
