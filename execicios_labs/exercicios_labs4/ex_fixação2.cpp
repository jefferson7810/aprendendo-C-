#include<iostream>
using namespace std;

void linha();
void pequeno();
void medio();
void grande();


int main()
{
	pequeno();
	medio();
	grande();

	cout << "progamacao de computadores ." << endl;
	
	grande();
	medio();
	pequeno();


	
}


/// <função linha>
void linha() 
{
	 
	cout << "----------";
}
///  função pequeno>

void pequeno()
{
	linha();
	cout << endl;
}
//  função medio------------

void medio()
{
	linha(), linha();
	cout << endl;

}

//---------- função grande

void grande()
{
	linha(), linha(), linha();
	cout << endl;


}