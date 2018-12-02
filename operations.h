#ifndef operations_h
#define operations_h

#include <stdexcpt.h>

struct complex {
	int real;
	int imaginary;
};

#endif
class complex_operations
{
public:
	inline complex_operations();
	inline complex add(complex a, complex b);
	inline complex subtract(complex a, complex b);
	inline complex multiply(complex a, complex b);
	inline complex divide(complex a, complex b);
};

