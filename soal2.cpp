#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	int n;
	char lanjut;
	int total = 0;
	bool ulang = true;
	// cout<<"Masukkan N : ";
	// cin>>n;

	while(ulang == true) {
	    cout<<"Masukkan N : ";
		cin>>n;
		cout<<"Ulang? Y/T : ";
		cin>>lanjut;
		if (lanjut=='t')
		{
			ulang=false;
		}

		total = total+n;

	}

	cout<<total<<endl;
	system("pause");
	return 0;
}