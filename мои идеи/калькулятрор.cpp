#include <iostream>
#include <istream>
#include <windows.h>
#include <string>

using namespace std;

int main(char) {
	system("chcp 1251>nul");
	int a, b;
	cout << "����� ������ �����"<< endl ;
	cin >> a;
	cout << "����� ������ �����" << endl;
	cin >> b;
	
	cout << "����� ����(+,-,/,*)" << endl;

	string znak;
	int otv;

	cin >> znak;
	if (znak == "+") {
		otv = a + b;
		cout << otv << endl;




	} else if(znak=="-") {
		otv = a - b;
		cout << otv << endl;




	}
	else if (znak == "/"){
		otv = a / b;
		cout << otv << endl;
	
	



	}
	else if (znak == "*") {
		otv = a * b;
		cout << otv << endl;


	}
	else {
		cout << "���� ������ ����������:)";

	}
		
	


	cin.get();
	return 0;
}