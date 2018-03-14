#include<iostream>
#include<vector>
using namespace std;

int main()
{
	const int n=10;

	vector<int> v1;

	int mz = v1.max_size(); // 確保可能最大数
	cout << "max size=" << mz << endl;

	for( int k=0; k<n; k++ )
		v1.push_back( k+1 ); // 末尾に追加

	for( int k=0; k<n; k++ )
		cout << v1[k] << ", ";
	cout << endl;

	int f = v1.front(); // 先頭要素取得
	int t = v1.back();  // 最後要素取得
	int sz = v1.size(); // 現在の要素数
	
	cout << "front=" << f << endl;
	cout << "back=" << t << endl;
	cout << "size=" << sz << endl;
	
	v1.pop_back(); // 末尾削除
	v1.pop_back(); // 末尾削除
	sz = v1.size(); // 現在の要素数

	cout << "size=" << sz << endl;

	for( int k=0; k<sz; k++ )
		cout << v1[k] << ", ";
	cout << endl;

	return 0;
}
