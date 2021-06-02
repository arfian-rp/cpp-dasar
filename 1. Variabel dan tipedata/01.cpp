//VARIABLE N TIPEDATA
#include<iostream>
#include<typeinfo>
#include<algorithm>
using namespace std;
int global; //variable globla
void inisial(){
	global = 78;
}
void ubah(){
	global = 785;
}
void tesStatic(){
	int a{0};
	a++;
	cout<<"nilai a : "<<a<<endl<<endl;
}
void tes(){
	int a{9};
	cout<<"a di tes() : "<<a<<endl;
}
class Contoh{
public:
mutable int a;
int b;

Contoh(int a, int b){
	this->a=a;
	this->b=b;
}
};
int main(){
	int panjang, lebar, luas;
	string nama = "ArfianRp";
	double X{6.34}; //C++11 
	double Y(42.45);//C++11
	panjang = 8;
	lebar = 4;
	luas = panjang*lebar;
	cout<<"PERSEGI PANJANG"<<endl;
	cout<<"panjang(int): "<<panjang<<endl;
	cout<<"lebar(int): "<<lebar<<endl;
	cout<<"luas(int): "<<luas<<endl;
	cout<<"________"<<endl;
	cout<<"Nama(string): "<<nama<<endl;
	cout<<"________"<<endl;
	cout<<"X{} + Y() = "<<X+Y<<endl;
	cout<<"________"<<endl;
	auto a(345);
	auto b(23.54);
	auto c('C');
	auto d(241.912F);
	cout<<"auto (a) = "<<a<<" "<<typeid(a).name()<<endl;
	cout<<"auto (b) = "<<b<<" "<<typeid(b).name()<<endl;
	cout<<"auto (c) = "<<c<<" "<<typeid(c).name()<<endl;
	cout<<"auto (d) = "<<d<<" "<<typeid(d).name()<<endl;
	cout<<"________"<<endl;
	cout<<"a di main() : "<<a<<endl;
	tes();
	cout<<"________"<<endl;
	inisial();
	cout<<"var GLOBAL awal = "<<global<<endl;
	ubah();
	cout<<"var GLOBAL ubah = "<<global<<endl;
	cout<<"________"<<endl;
	cout<<"pemanggilan pertama = ";
	tesStatic();
	cout<<"pemanggilan kedua = ";
	tesStatic();
	cout<<"pemanggilan ketiga = ";
	tesStatic();
	cout<<"________"<<endl;
	const Contoh obj(10,20);
	cout<<"Sebelum diubah"<<endl;
	cout<<"Nilai a: "<<obj.a<<endl;
	cout<<"Nilai b: "<<obj.b<<endl;
	obj.a=88;
	//obj.b=99; bukan mutable
	cout<<"Setelah diubah"<<endl;
	cout<<"Nilai a: "<<obj.a<<endl;
	cout<<"Nilai b: "<<obj.b<<endl;
	cout<<"________"<<endl;
	int x;
	cin>>x;
	cout<<"inputan = "<<x<<endl;
	cout<<"________"<<endl;
	char c1 = 'e';
	cout<<"ASCII untuk e adalah : "<<(int) c1<<endl;
	cout<<"________"<<endl;
	const double pi = 3.1415;
	cout<<"Pi = "<<pi<<endl; 


	cin.get();
	return 0;
}
