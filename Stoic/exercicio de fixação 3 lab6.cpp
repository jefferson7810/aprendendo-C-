#include<iostream>
using namespace std;

int main()
{
	short variavel_short ;
	int variavel_int;
	long variavel_long;
	long long valariavel_llong;

	string bit = " bytes";

	cout << "short :       " << sizeof(variavel_short) << bit << endl;
	cout << "int:          " << sizeof(variavel_int) << bit <<endl;
	cout << "long:         " << sizeof(variavel_long) <<bit << endl;
	cout << "long long:    " << sizeof(valariavel_llong) <<bit<<endl;
	
	cout << "total:        " << sizeof(variavel_short) + sizeof(variavel_int) + sizeof(variavel_long) + sizeof(valariavel_llong) << bit ;

}