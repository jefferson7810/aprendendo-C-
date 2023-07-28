#include<iostream>
using namespace std;

int main(void)
{
    int peso;
    float mest = 7.0; // para corrida e ciclismo
    float mest1 = 8.0; // para natação 
    

///////////////natação  //////////////// 
    cout << "Digite seu peso em quilos:" << endl;
    cin >> peso;

    int horaC, minC;
    char hora, min; 

    cout << "digite o tempo de corrida:"<< endl;
    cin >> horaC >> hora>> minC >> min ;

    float energiaC;

    energiaC = mest * (horaC + (minC/60) ) * peso;

     ///// ciclismo//////////////

    int horaCi, minCi;

    cout << "digite o tempo de ciclismo:"<< endl;
    cin >> horaCi >> hora>> minCi >> min ;

    float energiaCi;

    energiaCi = mest * (horaCi + (minCi/60) ) * peso;

    // natação ////////////////////////////

    int horaN, minN;

    cout << "digite o tempo de natacao:"<< endl;
    cin >> horaN >> hora>> minN >> min ;

    float energiaN;

    energiaN = mest1 * (horaN + (minN/60) ) * peso;


    float energia = (energiaC + energiaCi + energiaN);

    cout << "voce gastou um total de "<< energia << " calorias." << endl;

}