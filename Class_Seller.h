// Code developed by Linda P�rez on July 2020
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
	double anual_total();			//Funci�n de ayuda
	double sales[13];

};
