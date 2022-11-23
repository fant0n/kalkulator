#include <iostream>
#include <locale>
#include <windows.h>
using namespace std;

int main(void) {
	setlocale(LC_CTYPE, "rus");
	for (int num = 1000; num > 0; num -= 7) {


		cout << num << '-7' << endl;
	}
	    Sleep(30);
	

	

		return 0;
}