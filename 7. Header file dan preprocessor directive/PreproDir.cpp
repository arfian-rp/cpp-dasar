#include <iostream> //include
#define PI 3.14 //define
using namespace std;
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

using namespace std;
int main()
{
	spasi();
	cout<<"PREPROCESSOR DIRECTIVE"<<endl;
	spasi();
	cout<<"include"<<endl;
	cout<<"#include  file ('PreproDir.h' atau <iostream>)"<<endl;
	spasi();
	cout<<"define"<<endl;
	cout<<"#define nama value"<<endl;
	cout<<"L = PI.7*7"<<endl;
	cout<<"L = "<<PI<<"."<<7*7<<endl;
	cout<<"L = "<<PI*7*7<<endl;
	spasi();
	cout<<"if"<<endl;
	cout<<"#if kondisi"<<endl<<"\t aksi"<<endl<<"#endif"<<endl;
	#if _WIN32 || _WIN64
		#if _WIN64
			#define ENV "Windows 64-bit"
		#else
			#define ENV "Windows 32-bit"
		#endif
	#endif
	cout<<"kode program ini di kompilasi di "<<ENV<<endl;
	spasi();
	cout<<"ifdef"<<endl;
	cout<<"#ifdef NamaMakro //memeriksa apakah makro sudah di def"<<endl<<"endif"<<endl;
	spasi();
	cout<<"ifndef"<<endl;
	cout<<"#ifndef NamaMakro //kebalikan dari ifdef"<<endl<<"endif"<<endl;
	spasi();
	cout<<"undef"<<endl;
	cout<<"#undef NamaMakro //menghapus define nama NamaMakro"<<endl;
	spasi();
	cout<<"error"<<endl;
	cout<<"#error PesanKesalahan //membatalkan proses kompilasi dengan menampilkan PesanKesalahan"<<endl;
	spasi();


	cin.get();
	return 0;
}