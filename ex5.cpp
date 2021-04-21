#include <iostream>
#include <locale.h>
using namespace std;

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	
	string msg = "amanhã será feriado!";
	cout << msg << endl;
	
	int i;
	i = 0;
	while (i < msg.size())
	{
		cout << msg[i] << " ";
		++i;
	}
	cout << endl;
	
	for(i=0; i < msg.size(); ++i)
	{
		cout << msg.at(i) << " ";
	}
	cout << endl;
	
	for(char c: msg)
	{
		cout << c << " ";
	}
    cout << endl;
    
    for(string::iterator it = msg.begin(); it != msg.end(); ++it )
	{
		cout << *it << " ";
	}
    cout << endl;
	
	return 0;
}