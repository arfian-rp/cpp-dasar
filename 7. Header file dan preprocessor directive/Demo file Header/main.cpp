#include <iostream>
#include "aritmetika.cpp"
using namespace std;

int main()
{
	double x{8},y{4};
	cout<<"x + y = "<<tambah(x,y)<<endl;
	cout<<"x - y = "<<kurang(x,y)<<endl;
	cout<<"x * y = "<<kali(x,y)<<endl;
	cout<<"x / y = "<<bagi(x,y)<<endl;
	cin.get();
	return 0;
}