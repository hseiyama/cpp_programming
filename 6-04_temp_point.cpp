#include<iostream>
using namespace std;

template <class Type>
class Point
{
	Type x, y;

public:
	Point( Type, Type );

	void pr();
};

template <class Type>
Point<Type>::Point( Type ax, Type ay )
{
	this->x = ax;
	this->y = ay;
}

template <class Type>
void Point<Type>::pr()
{
	cout << "(" << this->x << ", " << this->y << ")" << endl;
}

int main()
{
	Point<int> pint( 0, 1 );
	Point<double> pdouble( 1.2, 3.4 );
	Point<char> pchar( 'a', 'b' );

	pint.pr();
	pdouble.pr();
	pchar.pr();

	return 0;
}
