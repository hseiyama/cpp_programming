#include <iostream>
using namespace std;

template <class Type> 
void myswap( Type &a, Type &b )
{
	cout << "Type version is called" << endl;

	Type temp = a;

	a = b;
	b = temp;
}

template<>
void myswap<int>( int &a, int &b )
{
	cout << "int version is called" << endl;

	int temp = a;

	a = b;
	b = temp;
}

int main()
{
	int    a = 1,   b = 2;
	double x = 1.0, y = 2.0;

	cout << "start program." << endl;
	cout << "a=" << a << ",b=" << b << endl;
	myswap( a, b );
	cout << "a=" << a << ",b=" << b << endl;

	cout << "x=" << x << ",y=" << y << endl;
	myswap( x, y );
	cout << "x=" << x << ",y=" << y << endl;
	cout << "end program." << endl;

	return 0;
}
