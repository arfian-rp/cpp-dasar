#include <iostream>
#include <cstdarg>
#include <cstdlib>
using namespace std;

#define FUNGSI_INLINE(a,b)((a>b)?a:b)
int maks(int n, ...){
	int nilai, maks;
	va_list v1;
	va_start(v1, n);
	maks = va_arg(v1, int);
	for(int i{0};i<n;i++){
		nilai = va_arg(v1, int);
		maks = (nilai > maks) ? nilai : maks;
	}
	va_end(v1);
	return maks;

}
void spasi(){
	cout<<endl;
	for(int spasi=0;spasi<=30;spasi++){
		cout<<"=";
	}
	cout<<endl;
	for(int spasi=0;spasi<=30;spasi++){
		cout<<"=";
	}
	cout<<endl;
}
void tanpa_return(string a){
	cout<<a<<endl;
}
int dengan_return(int a, int b){
	int result = a*b;
	return result;
}
void param_default(string a, bool baris_baru=false){
	cout<<a;
	if(baris_baru){
		cout<<endl;
	}
}
void increment(int& a){
	++a;
}
void tukar1(int a, int b){
	int c=a;
	a=b;
	b=c;
}
void tukar2(int& a, int& b){
	int c=a;
	a=b;
	b=c;
}
int fOverload(int k, int y){
	return k+y;
}
void fOverload(string k, string y, bool ijin=false){
	if(ijin){
		cout<<k<<" "<<y<<endl;
	}
	else if(!ijin){
		cout<<k<<y<<endl;
	}
}
int rekursifFaktorial(int n){
	if(n<0){
		cout<<"nilai tidak boleh negatif"<<endl;
		exit(1); //atau exit(EXIT_FAILURE)
	}
	if(n<=1) return 1;
	return n*rekursifFaktorial(n-1); //memanggil dirinya sendiri
}
auto Fgayabaru(int a, int b)->int{
	return a*b;
}
int main(int argc, char const *argv[])
{
	spasi();
	cout<<"FUNGSI TANPA RETURN"<<endl;
	tanpa_return("Fungsi Dipanggil");
	spasi();
	cout<<"FUNGSI DENGAN RETURN"<<endl;
	int hasil=dengan_return(9,16);
	cout<<hasil<<endl;
	spasi();
	cout<<"PARAMETER DENGAN NILAI DEFAULT"<<endl;
	param_default("Hello gais");
	spasi();
	cout<<"PARAMETER MASUKAN KELUARAN"<<endl;
	int x{7};
	increment(x);
	cout<<x<<endl;
	spasi();
	cout<<"PASS BY VALUE"<<endl;
	int x1{10}, y1{30};
	cout<<"sebelum ditukar"<<endl;
	cout<<"x = "<<x1<<endl;
	cout<<"y = "<<y1<<endl;
	cout<<"memanggil fungsi tukar"<<endl;
	tukar1(x1,y1);
	cout<<"setelah ditukar"<<endl;
	cout<<"x = "<<x1<<endl;
	cout<<"y = "<<y1<<endl;
	spasi();
	cout<<"PASS BY REFERENCE"<<endl;
	int x2{10}, y2{30};
	cout<<"sebelum ditukar"<<endl;
	cout<<"x = "<<x2<<endl;
	cout<<"y = "<<y2<<endl;
	cout<<"memanggil fungsi tukar"<<endl;
	tukar2(x2,y2);
	cout<<"setelah ditukar"<<endl;
	cout<<"x = "<<x2<<endl;
	cout<<"y = "<<y2<<endl;
	spasi();
	cout<<"PARAMETER DINAMIS: VARIABLE ARGUMENTS LIST"<<endl;
	cout<<"Nilai Maks 1: "<<maks(4,5,62,32,634)<<endl;
	cout<<"Nilai Maks 2: "<<maks(4,5,62,32,634,315132,315)<<endl;
	cout<<"Nilai Maks 3: "<<maks(4,5,62,32,634,12,351,21341)<<endl;
	spasi();
	cout<<"PARAMETER ARGC DAN ARGV PADA MAIN()"<<endl;
	for(int i{0};i<argc;i++){
		cout<<"argumen ke-"<<i<<": "<<argv[i]<<endl;
	}
	spasi();
	cout<<"FUNGSI INLINE"<<endl;
	cout<<"var 1 = "<<14<<endl;
	cout<<"var 2 = "<<90<<endl;
	cout<<"var terbesar = "<<FUNGSI_INLINE(14,90)<<endl;
	spasi();
	cout<<"FUNGSI OVERLOADING"<<endl;
	cout<<fOverload(82,42)<<endl;
	fOverload("fungsi","overloading");
	cout<<"kedua fungsi menggunakan nama yg sama"<<endl;
	spasi();
	cout<<"FUNGSI REKURSIF"<<endl;
	int t{5},f;
	f=rekursifFaktorial(t);
	cout<<t<<"! = "<<f<<endl;
	spasi();
	cout<<"FUNGSI GAYA BARU"<<endl;
	cout<<Fgayabaru(9,6)<<endl;
	spasi();
	cout<<"MEMBUAT FUNGSI TANPA NAMA"<<endl;
	double d1{5.0},d2{6.0},vol1{0.0},vol2{0.0};
	vol1=[](double a)->double{ return a*a*a;}(d1);
	vol2=[](double a)->double{ return a*a*a;}(d2);
	cout<<"vol 1 = "<<vol1<<endl;
	cout<<"vol 2 = "<<vol2<<endl;
	spasi();
	cout<<"MENAMAI EKSPRESI LAMDA"<<endl;
	auto kali=[](int a,int b)->int{ return a*b;};
	cout<<"76 * 6 = "<<kali(76,6)<<endl;
	cin.get();
	return 0;
}
