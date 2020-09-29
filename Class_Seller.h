// Code developed by Linda Pérez on July 2020
// 

#pragma once
class Seller
{
public:
	Seller();
	void get_sales();
	void set_sales(int, double);
	void print_sales();

private:
	double anual_total();			//Función de ayuda
	double sales[13];

};
