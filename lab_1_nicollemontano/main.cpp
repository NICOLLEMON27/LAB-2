#include<iostream>
#include<string>

#include "strings.h"

using std::cout;
using std::endl;
using std::string;
using strings::contains;

int main (int argc, char *argv[]) {
	string str ="merequetengue";//usar el operador de asignacion
	string pattern("que");//invocar al constructor
	
	cout<< " Algoritmo para determinar si una cadena esta contenida dentro de otra"<<endl;
	
	cout<< " ingrese la cadena:"<<endl;
	std::getline(std ::cin,str);
	cout<< " ingrese el patron:";
	std::getline(std::cin,pattern);
	cout
		<<str<<" contains "
		<<pattern<<" ? "
		<<(contains(str,pattern) ? "yes" : "no")
		<<endl;
	return 0;
}

