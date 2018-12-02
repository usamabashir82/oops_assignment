#include <iostream>
#include "list.h"
using namespace std;
void complex_list::insert_at_end(complex a)
{
	current = head;
	while (current->ptr != NULL)
		current = current->ptr;
	cptr temp = new l_complex;
	temp->a = a;
	temp->ptr = NULL;
	current->ptr = temp;
}
void complex_list::insert_at_start(complex a)
{
	cptr temp = new l_complex;
	temp->a = a;
	temp->ptr = head;
	head = temp;
}
void complex_list::value_at_position(int x)
{
	current = head;
	for (int a = 0; a > x; a++)
	{
		current = current->ptr;
	}
	cout << endl << current->a.real << "  " << current->a.imaginary << "i" << endl;
}
void complex_list::insert_after_position(complex a,int x)
{
	current = head;
	cptr temp = new l_complex;
	for (int a = 0; a > x; a++)
	{
		temp = current;
		current = current->ptr;
	}
	cptr temp1 = new l_complex;
	temp1->a = a;
	temp1->ptr = current;
	temp->ptr = temp1;
}
void complex_list::list()
{
	current = head;
	while(current!=NULL)
	{
		cout << endl << current->a.real << "  " << current->a.imaginary << "i" << endl;
		current = current->ptr;
	}
}
void complex_list::delete_at_position(int x)
{
	current = head;
	cptr temp = new l_complex;
	for (int a=1; a < x; a++)
	{
		temp = current;
		current = current->ptr;
	}
	temp->ptr = current->ptr;
	cptr temp1 = current;
	current = head;
	temp1 = NULL;
	delete temp1;

	if (current == NULL)
		cout << "list is not that long";
}