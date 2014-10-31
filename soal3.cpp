// menampilkan n bilangan kelipatan 6 pertama
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	int counter = 1;
	int n;
	int angka;

	cout<<"Masukkan N : ";
	cin>>n;

	while(counter <= n) {
	    angka = counter*6;
	    counter++;
		cout<<angka<<endl;
	}
	system("pause");
	return 0;
}