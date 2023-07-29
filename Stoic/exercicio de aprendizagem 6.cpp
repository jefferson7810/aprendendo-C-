#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

//_____funções_______//

void inicializar(), ligar(), verificar(), ativar();

float num;

int main()
{
	srand(time(NULL));
	num = rand();
	
	if (num > 10000)
	{
		cout << num << endl;
		inicializar();
		cout << "Sistema funcionando" << endl;
	}

	else
	{
		cout << num << endl;
		cout << "falha na inicializacao" << endl;

	}

}

void inicializar()
{
	cout << "inicializando sistema:" << endl;
	ligar();
	verificar();
	ativar();
	cout << "inicializacao concluida." << endl;


}

void ligar()
{
	cout << "ligando dispositivos" << endl;
}

void verificar()
{
	cout << "verificando integridade" << endl;
}

void ativar()
{
	cout << "Ativando processos" << endl;
}
