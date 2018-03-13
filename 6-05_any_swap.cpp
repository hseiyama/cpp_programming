#include <iostream>
using namespace std;

template <class Type1, class Type2> 
void myswap( Type1 &a, Type2 &b )
{
	long double temp = a;

	a = (Type1)b;
	b = (Type2)temp;
}

int main()
{
	double x = 2.5;
	int y = 5;

	cout << "x=" << x << ", y=" << y << endl;
	myswap( x, y );
	cout << "x=" << x << ", y=" << y << endl;

	return 0;
}
