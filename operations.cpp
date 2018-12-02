#include <iostream>
#include "operations.h"


complex_operations::complex_operations()
{

}
complex complex_operations::add(complex a, complex b)
{
	complex x;
	x.real = a.real + b.real;
	x.imaginary = a.imaginary + b.imaginary;
	return x;

}
complex complex_operations::subtract(complex a, complex b)
{
	complex x;
	x.real = a.real - b.real;
	x.imaginary = a.imaginary - b.imaginary;
	return x;
}
complex complex_operations::multiply(complex a, complex b)
{
	complex x;
	x.real = a.real*b.real + a.imaginary*b.imaginary;
	x.imaginary = a.real*b.imaginary + b.real*a.imaginary;
	return x;
}
complex complex_operations::divide(complex a, complex b)
{
	complex x;
	x.imaginary = 0;
	x.real = 0;
	try
	{
		if (b.imaginary == 0)
		{
			x.real = a.real / b.real;
			x.imaginary = a.imaginary / b.real;
			return x;
		}
		if (b.real == 0)
		{
			x.real = (-a.imaginary*b.imaginary) / (-b.imaginary*b.imaginary);
			x.imaginary = (-a.real*b.imaginary) / (-b.imaginary*b.imaginary);
			return x;
		}
		if (b.real == 0 && b.imaginary == 0)
		{
			throw 1;
		}
		else
		{
			x.real = ((a.real*b.real) + (-a.imaginary*b.imaginary)) / (b.real*b.real - b.imaginary*b.imaginary);
			x.imaginary = ((-a.real*b.imaginary) - (a.imaginary*b.real)) / (b.real*b.real - b.imaginary*b.imaginary);
			return x;
		}
	}
	catch (int)
	{
		std::cout << "Error: Division by zero";
	}
	return x;
}