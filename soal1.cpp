#include <iostream>
#include <windows.h>
using namespace std;
int main(){
	int total = 0;
	int x,y;
	cout<<"Masukkan X : ";
	cin>>x;

	cout<<"Masukkan Y : ";
	cin>>y;

	while(x <= y) {
	    total = total +x;
	    x++;
	}

	cout<<total<<endl;
	
	system("pause");
	
	return 0;

}

