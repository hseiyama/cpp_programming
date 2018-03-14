#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int k;
	int t[] = { 1, 8, 6, 3, 9, -2, 0, 5, };
	const int n = sizeof t / sizeof t[0];

	vector<int> v1;

	for( k = 0 ; k < n ; k++ )
		v1.push_back( t[k] );

	int sz = v1.size();

	for( k = 0 ; k < sz ; k++ )
		cout << v1.at( k ) << " ";
	cout << endl;

	sort( v1.begin(), v1.end() );

	for( k = 0 ; k < sz ; k++ )
		cout << v1.at( k ) << " ";
	cout << endl;

	return 0;
}
