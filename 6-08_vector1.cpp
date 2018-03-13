#include<iostream>
#include<vector>
using namespace std;

int main()
{
	const int n=10;

	vector<int> v1;

	for( int k=0; k<n; k++ )
		v1.push_back( k+1 );

	for( int k=0; k<n; k++ )
		cout << v1[k] << ", ";
	cout << endl;

	for( int k=0; k<n; k++ )
		cout << v1.at(k) << ", ";
	cout << endl;

	for( int k=0; k<n+1; k++ ) // エラー；しかし、終了しない
		cout << v1[k] << ", ";
	cout << endl;

	for( int k=0; k<n+1; k++ ) // エラー；Abortする
		cout << v1.at(k) << ", ";
	cout << endl;

	return 0;
}
