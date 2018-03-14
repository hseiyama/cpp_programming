#include<iostream>
#include<vector>
#include<stdexcept>
using namespace std;

int main()
{
	const int n=10;

	vector<int> v1;

	for( int k=0; k<n; k++ )
		v1.push_back( k+1 );

	try
	{
		for( int k=0; k<n+1; k++ ) // エラー；out_of_range例外をスロー
			cout << v1.at(k) << ", ";
		cout << endl;
	}
	catch( out_of_range e ) // out_of_range, runtime_error, exceptionでもキャッチOK
	{
		cout << endl << "例外発生" << endl;
	}
	
	return 0;
}
