#include <iostream>
#include "list.cpp"
using namespace std;

void main()
{
	
		complex a;
		a.real = -4;
		a.imaginary = 5;
		complex b;
		b.real = -3;
		b.imaginary = -3;
		complex c;
		c.real = -4;
		c.imaginary = 3;
	
	complex_operations op;
	complex_list ls;
	ls.insert_at_start(c);
	ls.insert_at_start(b);
	ls.insert_at_start(a);
	cout << "Storing three Numbers" << endl;
	ls.list();
	cout << "adding the sum of first two numbers at the end";
	ls.insert_at_end(op.add(a, b));
	ls.list();
	cout << "subtracting first and third and adding at the end of list";
	ls.insert_at_end(op.subtract(a, c));
	ls.list();
	cout << "multiplying second and third and adding at last";
	ls.insert_at_end(op.multiply(b, c));
	ls.list();
	cout << "Dividing first and third and adding at last";
	ls.insert_at_end(op.divide(a, c));
	ls.list();
	cout << "deleting the 4th element";
	ls.delete_at_position(4);
	ls.list();
	system("pause");

}