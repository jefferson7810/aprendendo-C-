#include <iostream>
using namespace std;

int main(void)
{
    int custo; // valor pago pela fabrica

    cout << "Custo de fabrica:" << endl;
    cin >> custo;

    float valor, porcentagem_distri , impostos; // valor que o consumidor deve pagar 

    porcentagem_distri = (custo * 0.28);
    impostos =  (custo * 0.45 );
    valor = custo + porcentagem_distri + impostos;

    cout << "O custo ao consumidor e de R$ " << valor  << endl; 
    
    




    
}