#include <iostream>
#include "operations.cpp"

struct l_complex
{
	complex a;
	l_complex * ptr=NULL;
};
typedef struct l_complex * cptr;
class complex_list
{
private:
	cptr head=NULL;
	cptr current=NULL;
public:
	inline void insert_at_end(complex a);
	inline void insert_at_start(complex a);
	inline void value_at_position(int a);
	inline void insert_after_position(complex a,int x);
	inline void delete_at_position(int x);
	inline void list();
};