#include<iostream>
using namespace std;

void calcular_tempo_total(int,int,int,int);

int main()
{
	int hora_chegada;
	int hora_partida;

	
	char pontos;

	cout << "Digite o horario de partida (HH:MM):";
	int minuto_partida ;
	cin >> hora_partida >> pontos >> minuto_partida;

	cout << "Digite o horario de chegada (HH:MM):";

	int minuto_chegada ;

	cin >> hora_chegada >> pontos>> minuto_chegada;

	calcular_tempo_total(hora_partida, minuto_partida, hora_chegada, minuto_chegada);

}
void calcular_tempo_total(int hora_partida, int minuto_par, int hora_chegada, int minuto_chegada)
{
	int total_de_minutos = (minuto_chegada - minuto_par) + ((hora_chegada - hora_partida) * 60);

	int horas = total_de_minutos / 60;
	int minutos = total_de_minutos % 60;

	cout << " o tempo de viagem foi de " << horas << ':' << minutos;
}



