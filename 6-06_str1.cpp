#include<iostream>
using namespace std;

int main()
{
	string s1 = "abcdefg";
	string s2 = "hijklmnopqrstu";

	string st = s1 + s2; // 文字列の連結

	cout << "1:" << st << endl;

	st.insert( 5, "***" );

	cout << "2:" << st << endl;

	st.replace( 5, 3, "---" );

	cout << "3:" << st << endl;

	string s3 = st.substr( 5, 3 );

	cout << "4:" << st << endl;
	cout << "5:" << s3 << endl;

	return 0;
}
