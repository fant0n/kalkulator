#include <iostream>
#include <istream>
#include <windows.h>
#include <string>

using namespace std;

int main(char) {
	system("chcp 1251>nul");
	int a, b;
	cout << "Введитн первое число"<< endl ;
	cin >> a;
	cout << "Введите второе число" << endl;
	cin >> b;
	
	cout << "Выберете знак(+,-,/,*)" << endl;

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
		cout << "Выбере другой знак :)";

	}
		
	


	cin.get();
	return 0;
}
