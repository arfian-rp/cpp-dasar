#include <iostream>
#include <string>
using namespace std;
void spasi(string h="sss"){
	for(int spasi=0;spasi<=40;spasi++){
		cout<<"=";
	}
	cout<<endl;
	if (h != "sss")
	{
		cout<<"\t\t"<<h<<endl;
	}
	for(int spasi=0;spasi<=40;spasi++){
		cout<<"=";
	}
	cout<<endl;
}

int main(int argc, char const *argv[])
{
	spasi("STRING");
	spasi("contoh string");
	string namadepan = "sulaiman";
	string namabelakang = "budi";
	string nama = namadepan + namabelakang;
	cout<<nama<<endl;
	spasi("menyalin string");
	size_t len;
	string s1= "C++";
	char s2[2], s3[3];
	len = s1.copy(s2,1);
	s2[len] = '\0';
	len = s1.copy(s3,2,1);
	s3[len] = '\0';
	cout<<"s1="<<s1<<endl;
	cout<<"s2="<<s2<<endl;
	cout<<"s3="<<s3<<endl;
	spasi("concat");
	string namadepan2 = "ahmad";
	string namabelakang2 = "budi";
	string nama2 = namadepan2 + namabelakang2;
	cout<<nama2<<endl;
	spasi("mengambil panjang string");
	string s4 = "HELLO WORLD";
	cout<<"s4 = "<<s4<<endl;
	cout<<"s4.size() = "<<s4.size()<<endl;
	cout<<"s4.length() = "<<s4.length()<<endl;
	cin.get();
	return 0;
}