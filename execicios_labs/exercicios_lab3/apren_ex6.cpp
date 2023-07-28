#include <iostream>
using namespace std;

int main(void)
{
    int lado_a, lado_b, area, altura, volume;

    cout <<"lado a:" << endl;
    cin >> lado_a;

    cout <<"lado b:" << endl;
    cin >> lado_b;

    area = lado_a * lado_b ;
    cout << "area da base:"<< area <<endl ;

    cout << "altura:" << endl ;
    cin >> altura ;

    volume = area * altura;
    cout << "Volume do prisma = " << volume << endl ;

}