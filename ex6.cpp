#include <iostream>
#include <locale.h>
#include <windows.h>
using namespace std;

void gotoxy(short x, short y)
{
	COORD coord = {x, y};
	SetConsoleCursorPosition( GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void mostra(string s, short x, short y)
{
	gotoxy(x, y);
	cout << s;
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	
	string msg = "Amanhã será feriado. Feriado de Tiradentes!";
	string msgU = "";
	
	for(char c: msg)
	{
		msgU += toupper(c);
	}
	
	mostra(msg, 20, 5);
	
	mostra(msgU, 20, 7);
	
	
	for(unsigned int i=0; i < msg.size(); ++i)
	{
		msg[i] = toupper(msg[i]);
	}
	
	gotoxy(20, 11);
    cout << msg;
    
    gotoxy(20, 13);
	cout << msgU;
	
	int pos1 = msgU.find("FERIADO");
	int pos2 = msgU.rfind("FERIADO");
	int pos3 = msgU.find("FERIADO", 20);

    gotoxy(20, 15);	
	cout << pos1;
	gotoxy(20, 17);
	cout << pos2;
	gotoxy(20, 19);
	cout << pos3;
	
	return 0;
}