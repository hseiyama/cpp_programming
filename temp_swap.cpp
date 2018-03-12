#include <iostream>
using namespace std;

template <class Type> 
void myswap( Type &a, Type &b )
{
	Type temp = a;

	a = b;
	b = temp;
}

// コメントの追加

int main()
{
	int    a = 1,   b = 2;
	double x = 1.0, y = 2.0;

	cout << "a=" << a << ",b=" << b << endl;
	myswap( a, b );
	cout << "a=" << a << ",b=" << b << endl;

	cout << "x=" << x << ",y=" << y << endl;
	myswap( x, y );
	cout << "x=" << x << ",y=" << y << endl;

	return 0;
}
