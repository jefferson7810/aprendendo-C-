#include<iostream>
#include<cmath>

using namespace std;
double pi = 3.14159265;
int main()
{
	double angulo , seno;
	
	cout << "Digite o angulo:" << endl;
	cin >> angulo;

	seno = sin((angulo*pi/180));

	cout << "Seno:" << seno;

}