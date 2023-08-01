#include<iostream >
#include<cmath> 

using namespace std;

float IMC(float, float);// (massa,altura)

int main()
{
	float massa, altura;

	cout << "Indice de massa corporal" << endl;
	cout << "-------------------------" << endl;
	cout << "Altura|:";
	cin >> altura;
	cout << "Massa:";
	cin >> massa;

	cout << "IMC:" << IMC(massa , altura);

}

float IMC(float a,float b) //a = massa , b altura
{
	float imc = a / pow(b, 2);

	return imc;

}