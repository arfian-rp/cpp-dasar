#include<iostream>
#include<cstring>
using namespace std;
void spasi(){
	for(int spasi=0;spasi<=30;spasi++){
		cout<<"=";
	}
	cout<<endl;
	for(int spasi=0;spasi<=30;spasi++){
		cout<<"=";
	}
	cout<<endl;
}
int contoh_fungsi_yang_pakai_pointer(int a){
	cout<<"Fungsi Dipanggil "<<endl;
	return a+1;
}
int main()
{
	spasi();
	cout<<"POINTER"<<endl;
	int a{10};
	int *p;//pointer p ke tipe int, salah jk tdk pkai *
	p=&a;
	cout<<"a = "<<a<<endl;
	cout<<"nilai *p = "<<*p<<endl;
	cout<<"pointer p = "<<p<<endl;
	cout<<"mengganti isi alamat di *p"<<endl;
	*p = 90;
	cout<<"a = "<<a<<endl;
	cout<<"nilai *p = "<<*p<<endl;
	cout<<"pointer p = "<<p<<endl;
	spasi();
	cout<<"POINTER DI ARRAY"<<endl;
	int array[5]{32,44,34,46,23};
	p=array;
	for(int i;i<5;i++){
		cout<<p[i]<<endl;
	}
	spasi();
	cout<<"POINTER FUNGSI"<<endl;
	int (*f)(int), hasil;
	f=&contoh_fungsi_yang_pakai_pointer;
	hasil=f(78);
	cout<<hasil<<endl;
	spasi();
	cout<<"POINTER KE POINTER"<<endl;
	int k(23),*s(&k),**t(&s);
	cout<<"nilai k 		= "<<k<<endl;
	cout<<"alamat k 	= "<<&k<<endl;
	cout<<" pointer s = "<<s<<endl;
	cout<<"alamat s 	= "<<&s<<endl;
	cout<<" pointer t = "<<t<<endl;
	spasi();
	cout<<"POINTER KE POINTER UNTUK STRING"<<endl;
	char **daftar;
	daftar = new char *[5];

	daftar[0]=new char[2];
	strcpy(daftar[0],"C");

	daftar[1]=new char[4];
	strcpy(daftar[1],"C++");

	daftar[2]=new char[3];
	strcpy(daftar[2],"C#");

	daftar[3]=new char[5];
	strcpy(daftar[3],"Java");

	daftar[4]=new char[7];
	strcpy(daftar[4],"Python");

	cout<<"Daftar Bahasa Pemrograman: "<<endl;
	for(int i1=0;i1<5;i1++){
		cout<<i1+1<<". "<<daftar[i1]<<endl;
		//membuang memory
		delete daftar[i1];
	}
	delete [] daftar;
	spasi();
	cout<<"REFERENSI"<<endl;
	int a1 {9};
	int& refa {a1};
	cout<<"nilai a1 = "<<a1<<endl;
	cout<<"nilai refa1 = "<<refa<<endl;
	cout<<"nilai refa1 diganti..."<<endl;
	refa=12;
	cout<<"nilai a1 = "<<a1<<endl;
	cout<<"nilai refa1 = "<<refa<<endl;
	cout<<"nilai a1 diganti..."<<endl;
	a1=175;
	cout<<"nilai a1 = "<<a1<<endl;
	cout<<"nilai refa1 = "<<refa<<endl;
}
