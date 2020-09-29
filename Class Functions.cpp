// Code developed by Linda Pérez on July 2020
// 

#include <iostream>
#include <iomanip>
#include "Class_Seller.h"

Seller::Seller() {
	for (int i = 0; i <= 12; i++)
		sales[i] = 0;				//Cada posición del arreglo se inicializa en 0
};

void Seller::get_sales() 
{
	double amount;

	for (int i=1; i <= 12; i++)
	{
		std::cout << "Introduzca el monto del mes " << i << "\t";
		std::cin >> amount;
		std::cout << std::endl;
		set_sales(i,amount);
	}
}

void Seller::set_sales(int month, double amount) 
{	
	if (month >= 1 && month <= 12 && amount > 0)
	{
		sales[month - 1] = amount;
	}
	else
		std::cout << "Monto inválido" << std::endl << std::endl;

	anual_total();
}

double Seller::anual_total()	//Función de ayuda, realiza operaciones con los datos privados
{
	double total=0.0;

	for (int month = 0; month <= 12; month++)
		total += sales[month];

	return total;
}
 
void Seller::print_sales()
{
	std::cout << "El total de las ventas anuales es\t$\t"
		 << std::setprecision(2)
		 << std::setiosflags(std::ios::fixed| std::ios::showpoint)
		 << anual_total()
		 << std::endl << std::endl;
}

