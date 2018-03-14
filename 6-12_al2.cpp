#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	const int n=10;
	vector<int> v1;

	for( int k=0; k<n; k++ )
		v1.push_back( k+1 ); // 末尾に追加

	int sz = v1.size(); // 
	cout << "size=" << sz << endl;

	for( int k=0; k<sz; k++ )
		cout << v1[k] << ", ";
	cout << endl;

	reverse( v1.begin(), v1.end() );

	for( int k=0; k<sz; k++ )
		cout << v1[k] << ", ";
	cout << endl;

	random_shuffle( v1.begin(), v1.end() );

	for( int k=0; k<sz; k++ )
		cout << v1[k] << ", ";
	cout << endl;

	return 0;
}
