#include <iostream>
using namespace std;

int main (void)
{
    int hora, min; 
    char pontos ;

    cout << "que horas sao ?" << endl;
    cin >> hora >> pontos >> min ;

    cout <<"O seu relogio esta atrasado." << endl;
    cout << "agora sao "<< hora + 1 << pontos << min << endl;   
}