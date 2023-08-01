#include<iostream >
using namespace std;

float aumentar_salario(int);

int main()
{
	int salario;

	cout << "Salario atual:";
	cin >> salario;

	cout << "Salario ajustado:" << aumentar_salario(salario);

}

float aumentar_salario(int s)
{
	return s + (s * 0.15);
}