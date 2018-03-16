#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream ofs( "output.txt" );
//	if( ofs == NULL )
	if( !ofs )
	{
		cout << "output.txtを作成できません。" << endl;
		exit( 1 );
	}

	ofs << "おはよう" << endl;
	ofs << "こんにちは" << endl;
	ofs << "こんばんは" << endl;
	ofs << "さようなら" << endl;

	ofs.close();

	return 0;
}
