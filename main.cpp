#include "sdt.h"
#include <iostream>

//Программа является учебной
int main(){
	setlocale(LC_ALL, "Russian"):
	int a, b;
	std::cout << "Введите a и b: ";
	std::cin >> a >> b;
	td::cout << "a - b =" << a-b << std::endl;
	td::cout << "a / b =" << a/b << std::endl;
	return 0;
}