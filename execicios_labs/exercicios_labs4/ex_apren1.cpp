#include<iostream>
#include<cmath>

using namespace std;

void distancia();

float pontoPx, pontoPy, pontoQx, pontoQy;


int main()
{

	char i;
	cout << "ponto P:" << endl;
	cin >> pontoPx >> i >> pontoPy;

	cout << "Ponto Q:" << endl;
	cin >> pontoQx >> i >> pontoQy;

	distancia();
	 
}

void distancia()
{
	float x, y, raiz, distan;

	x = (pontoQx - pontoPx) * (pontoQx - pontoPx);
	y = (pontoQy - pontoPy) * (pontoQy - pontoPy);

	raiz = x + y;
	distan = sqrt(raiz);
	
	cout << "A distancia entre P e Q e :" << distan;


}