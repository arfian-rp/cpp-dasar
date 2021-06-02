#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
void spasi(){
	for(int spasi=0;spasi<=20;spasi++){
		cout<<" ";
	}
	cout<<endl;
	for(int spasi=0;spasi<=20;spasi++){
		cout<<" ";
	}
	cout<<endl;
}
class Contoh{
	public:
		static int x;
		static void f(){
			cout<<"Contoh::x | "<<"nilai x = "<<x<<endl;
		}
};

int Contoh::x;

int main(){
	spasi();
	cout<<"OPERATOR PENUGASAN"<<endl;
	int i;
	long l;
	float f;
	double d;
	string cpp_str;
	
	i=123;
	l=1231451L;
	f=34.231F;
	d=1231.124;
	cpp_str="Bahasa C++";
	cout<<i<<endl<<l<<endl<<f<<endl<<d<<endl<<cpp_str<<endl<<endl;
	//i += 1 atau i = i+1
	i+=1;
	cout<<"i+=1 = "<<i<<endl;
	i=i+1;
	cout<<"i=i+1 = "<<i<<endl;
	spasi();
	cout<<"OPERATOR ARITMATIKA"<<endl;
	int x=5,y=6,hasil;
	cout<<"nilai x = "<<x<<endl;
	cout<<"nilai y = "<<y<<endl;
	hasil = x+y;
	cout<<"x + y = "<<hasil<<endl;
	hasil = x-y;
	cout<<"x - y = "<<hasil<<endl;
	hasil = x*y;
	cout<<"x * y = "<<hasil<<endl;
	hasil = x/y;
	cout<<"x / y = "<<hasil<<endl;
	hasil = x%y;
	cout<<"x % y = "<<hasil<<endl;
	x++;
	cout<<"x++ = "<<x<<endl;
	y--;
	cout<<"y-- = "<<y<<endl;
	spasi();
	cout<<"OPERATOR INCREMENT dan DECREMENT"<<endl;
	int a=6,b=8;
	cout<<"nilai a = "<<a<<endl;
	cout<<"nilai b = "<<b<<endl;
	cout<<"pre increment"<<endl;
	cout<<"a = "<<a<<endl;
	cout<<"++a = "<<++a<<endl;
	cout<<"a = "<<a<<endl;
	cout<<"post increment"<<endl;
	cout<<"a = "<<a<<endl;
	cout<<"a++ = "<<a++<<endl;
	cout<<"a = "<<a<<endl;
	cout<<endl;
	cout<<"pre decrement"<<endl;
	cout<<"a = "<<a<<endl;
	cout<<"--a = "<<--a<<endl;
	cout<<"a = "<<a<<endl;
	cout<<"post decrement"<<endl;
	cout<<"a = "<<a<<endl;
	cout<<"a-- = "<<a--<<endl;
	cout<<"a = "<<a<<endl;
	spasi();
	cout<<"OPERATOR RELASIONAL"<<endl;
	a = 10;
	b = 20;
	cout<<"a \t: "<<a<<endl;
	cout<<"b \t: "<<b<<endl;
	cout<<"a == b \t:"<<((a==b) ? "true" : "false")<<endl;
	cout<<"a != b \t:"<<((a!=b) ? "true" : "false")<<endl;
	cout<<"a < b \t:"<<((a<b) ? "true" : "false")<<endl;
	cout<<"a > b \t:"<<((a>b) ? "true" : "false")<<endl;
	cout<<"a >= b \t:"<<((a>=b) ? "true" : "false")<<endl;
	cout<<"a <= b \t:"<<((a<=b) ? "true" : "false")<<endl;
	spasi();
	cout<<"OPERASI LOGIKA"<<endl;
	a = 1;
	b = 0;
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	cout<<"and / a&&b"<<endl<<(a && b)<<endl;
	cout<<"or / a||b"<<endl<<(a || b)<<endl;
	cout<<"not !a"<<endl<<(!a)<<endl;
	spasi();
	cout<<"OPERASI BITWISE"<<endl;
	int q=12,w=10;
	cout<<"q \t= "<<(int) q<<endl;
	cout<<"w \t= "<<(int) w<<endl;
	cout<<"q & w \t= "<<(q&w)<<endl;
	cout<<"q | w \t= "<<(q|w)<<endl;
	cout<<"q ^ w \t= "<<(q^w)<<endl;
	cout<<"~q \t= "<<(~q)<<endl;
	spasi();
	cout<<"OPERATOR LAIN LAIN"<<endl;
	a=10;
	b=20;
	cout<<"OPERATOR ?:"<<endl;
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	cout<<"((a==b) ? \"benar\":\"salah\")\t"<<((a==b)? "benar":"salah")<<endl;
	cout<<"OPERATOR ::"<<endl;
	Contoh::x = 9;
	Contoh::f();
	cout<<"OPERATOR []"<<endl;
	int array[3];
	array[0]=21;
	array[1]=64;
	array[2]=23;
	array[3]=41;
	array[4]=13;
	for(int n=0;n<=4;n++){
		cout<<"array ke-"<<n<<" = "<<array[n]<<endl;
	}
	cout<<"OPERATOR sizeof"<<endl;
	cout<<a<<" "<<"sizeof(a)<int>"<<sizeof(a)<<endl;
	cout<<"OPERATOR & dan *"<<endl;
	int g=9;
	int *h;
	h = &g;
	cout<<"g = "<<g<<endl;
	cout<<"*h = "<<*h<<endl;
	cin.get();
	return 0;
}
