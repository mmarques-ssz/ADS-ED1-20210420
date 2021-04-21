#include <iostream>
#include <locale.h>
using namespace std;

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	string msg = "amanhã será feriado!";
	
	cout << msg[5] << endl;
	cout << msg.size() << endl;
	cout << msg.at(4) << endl;
	cout << msg.front() << endl;
	cout << msg.back() << endl;
	
	return 0;
}