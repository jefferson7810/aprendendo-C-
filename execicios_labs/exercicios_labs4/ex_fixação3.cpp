#include<iostream>
using namespace std;

void umtres();
void dois();

int main()
{
	cout << "Comencando agora:" << endl;
	umtres();
	cout << "pronto" << endl;
}

void dois()
{
	cout << " dois ";
}

void umtres()
{
	cout << "Um";
	dois();
	cout << "Tres" << endl;

}