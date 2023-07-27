#include <iostream>
using namespace std;

int main(void)
{
    int anos, cigarros ; // quantidade de anos, cigarros fumados por dia
    float preco, gasto ; // gasto : valor gasto em cigarro durante a vida

    cout << " A quantos anos voce fuma:"<< endl;
    cin >> anos  ;

    cout << "quantos cigarros voce fuma por dia:"<< endl;
    cin >> cigarros;

    cout << "Qual o preco da carteira de cigarro?" << endl;
    cin >> preco ;

    float quantidade, maco; // quantidade total de cigarros.

    quantidade = (anos * 365) * (cigarros);
    maco = (quantidade / 20);

    cout << "voce gastou ate agora R$:" << (maco * preco)
         << " em  cigarros." << endl;

}