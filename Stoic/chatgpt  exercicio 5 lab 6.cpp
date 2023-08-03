#include <iostream>
using namespace std;

// Fun��o para calcular o tempo total da viagem
void calcularTempoTotal(int partida_hora, int partida_minuto, int chegada_hora, int chegada_minuto) {
    // Calcula o tempo total em minutos
    int tempo_total_minutos = (chegada_hora - partida_hora) * 60 + (chegada_minuto - partida_minuto);

    // Converte o tempo total em horas e minutos
    int horas = tempo_total_minutos / 60;
    int minutos = tempo_total_minutos % 60;

    cout << "Tempo total de viagem: " << horas << " hora(s) e " << minutos << " minuto(s)." << endl;
}

// Fun��o para validar se o hor�rio informado � v�lido
bool validarHorario(int hora, int minuto) {
    if (hora >= 0 && hora <= 23 && minuto >= 0 && minuto <= 59) {
        return true;
    }
    return false;
}

int main() {
    cout << "Bem-vindo � Viagens&Turismo!" << endl;

    int partida_hora, partida_minuto, chegada_hora, chegada_minuto;

    cout << "Digite a hora de partida do �nibus (0-23): ";
    cin >> partida_hora;
    cout << "Digite os minutos de partida do �nibus (0-59): ";
    cin >> partida_minuto;

    if (!validarHorario(partida_hora, partida_minuto)) {
        cout << "Hor�rio de partida inv�lido." << endl;
        return 1;
    }

    cout << "Digite a hora de chegada do �nibus (0-23): ";
    cin >> chegada_hora;
    cout << "Digite os minutos de chegada do �nibus (0-59): ";
    cin >> chegada_minuto;

    if (!validarHorario(chegada_hora, chegada_minuto)) {
        cout << "Hor�rio de chegada inv�lido." << endl;
        return 1;
    }

    calcularTempoTotal(partida_hora, partida_minuto, chegada_hora, chegada_minuto);

    return 0;
}
