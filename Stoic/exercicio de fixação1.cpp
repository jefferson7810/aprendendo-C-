#include<iostream>
using namespace std;

void relogio(int,int);

int main()
{
	int hora, minuto;
	
	cout << "Entre com o numero de horas:";
	cin >> hora;
	cout << "Entre como o numero de minutos:";
	cin >> minuto;
	cout << "agora s�o: "; 
	relogio(hora, minuto);
}

void relogio(int h, int m)
{
	cout << h << ':' << m;
	
}