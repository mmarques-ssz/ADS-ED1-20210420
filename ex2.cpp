#include <iostream>
#include <locale.h>
using namespace std;

int main(int argc, char** argv)
{
	cout << setlocale(LC_ALL, "") << endl;
	string str1 = "12";
	string str2 = "22.89";
	string str2f = "22,89";
	string str3 = "20 dias";
	
	int val1 = stoi(str1);
	int val2 = stoi(str2);
	float val2f = stof(str2f);
	int val3 = stoi(str3);
	
	cout << val1 << endl;
	cout << val2 << endl;
	cout << val2f << endl;
	cout << val3 << endl;
	
	return 0;
}