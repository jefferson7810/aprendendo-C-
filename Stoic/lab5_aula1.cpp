#include<iostream>

using namespace std;

void tchau(int n);

void tchau(int n)
{
	cout << "finalizando sessao numero:" << n;
	cout << endl;
}

int main()
{
	cout << "encerrar sessao:";
	int sessao;
	cin >> sessao;
	tchau(sessao); // chamada de função 
}