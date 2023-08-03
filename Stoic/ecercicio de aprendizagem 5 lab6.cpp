#include<iostream>
#include<climits>

using namespace std;

void validar_isshort(long long);
void validar_isint(long long numero);

int main()
{
	cout << "digite um valor inteiro: ";
	long long valor;
	cin >> valor;

	cout << valor; validar_isshort(valor);
	cout << endl;
	cout << valor; validar_isint(valor);
}

bool isshort(long long numero)
{
	return (numero >= SHRT_MIN && numero <= SHRT_MAX);
}

bool isint(long long numero)
{
	return (numero >= INT_MIN  && numero <= INT_MAX);
}

void validar_isshort(long long numero)
{
	int resultado_short = isshort(numero);
	if ( resultado_short  == true)
	{
		cout <<" cabe em 16 bits";
	}
	else
	{
		cout << " nao cabe em 16 bits";
	}
}

void validar_isint(long long numero)
{
	int resultado_int = isint(numero);
	if (resultado_int == true)
	{
		cout << " cabe em 32 bits";
	}
	else
	{
		cout << " nao cabe em 32 bits";
	}

}