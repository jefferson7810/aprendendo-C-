#include <iostream>
using namespace std;
long long calculo(long long, long long);
int main()
{
	long long resultado = 200530ULL * 420800;
	cout << "Direto: " << resultado << endl;


	cout << "Fun��o: " << calculo(200530, 420800) << endl;
	return 0;
}


long long calculo(long long a, long long b)
{
	return a * b;
}

// o errro de overflow , da multiplica��o ocorre porque mesmo a varieavel que
// vai receber os resultados seja do tipo long long, os numero multiplicados s�o
// do tipo int , dessa for o resultado da multiplica��o desses dois numeros
// temb�m ser� do tipo int 