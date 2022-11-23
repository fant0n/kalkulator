#include <iostream>
#include <istream>
#include <windows.h>
#include <string>

using namespace std;

int main(char) {
	system("chcp 1251>nul");
	int a, b;
	cout << "¬веди второе число"<< endl ;
	cin >> a;
	cout << "¬веди второе число" << endl;
	cin >> b;
	
	cout << "¬веди знак(+,-,/,*)" << endl;

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
		cout << "«нак введен некоректно:)";

	}
		
	


	cin.get();
	return 0;
}