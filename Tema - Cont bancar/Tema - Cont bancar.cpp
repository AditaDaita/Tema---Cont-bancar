// Tema - Cont bancar.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	// In contul bancar avem 500.000 lei si dorim sa scoatem suma de 499 lei.
	
	int a = 500000, b = 499, c;
	std::cout << "Soldul curent este: " << a << std::endl;
	std::cout << "Introduceti suma dorita pentru retragere: " << std::endl;
	std::cin >> b;
	c = a - b;
	std::cout << "Soldul ramas este: " << c << std::endl;


	//Nota: De la tastatura pot introduce orice suma doresc, 
	// dar fara sa declar varianta b, b = 499, nu imi compileaza.


}

