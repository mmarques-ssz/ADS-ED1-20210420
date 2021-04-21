#include <iostream>
#include <locale.h>
using namespace std;

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	
	string str1 = "carro";
	string str2 = "carros";
	
	cout << ((str1.compare(str2)==0)?"Iguais":"Diferentes") << endl;
	/*
	if (str1.compare(str2)==0)
	{
		cout << "Iguais";
	}
	else
	{
		cout << "Diferentes";
	}
	*/
	
	cout << ((str1.compare(0, 5, str2, 0, 5)==0)?"Iguais":"Diferentes") << endl;
	
	
	
	
	return 0;
}