#include <iostream>
using namespace std;

template <class Type> 
void myswap( Type &a, Type &b )
{
	Type temp = a;

	a = b;
	b = temp;
}

int main()
{
	string s1 = "one";
	string s2 = "two";

	cout << "s1=" << s1 << ",s2=" << s2 << endl;
	myswap( s1, s2 );
	cout << "s1=" << s1 << ",s2=" << s2 << endl;
	cout << "conflict line" << endl;

	return 0;
}
