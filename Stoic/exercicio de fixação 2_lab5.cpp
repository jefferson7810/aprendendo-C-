#include<iostream>
using namespace std;

float conversor(float);

int main()
{
	float celcius;

	cout << "Digite a temperatura em graus celcius:";
	cin >> celcius;

	cout << celcius << "Graus celcius equivalem a ";
	cout << conversor(celcius) << "graus fahrenheit." << endl;

}

float conversor(float temperatura)
{
	float n = (temperatura * 1.8) + 32;

	return n;
}