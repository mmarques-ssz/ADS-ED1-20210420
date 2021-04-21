#include <iostream>
#include <fstream>
#include <locale.h>
using namespace std;

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	
	ifstream arq("lista.txt");
	
	if(arq.is_open())
	{
		string linha;
		while( getline(arq, linha) )
		{
			cout << linha << endl;
		}
		arq.close();
	}
	else
	{
		cout << "Não foi possível abrir o arquivo";
	}
	
	return 0;
}