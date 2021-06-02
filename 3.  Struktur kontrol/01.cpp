#include<iostream>
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
int main(){
	spasi();
	cout<<"STRUKTUR KONTROL"<<endl;
	spasi();
	cout<<"if, else if, else"<<endl;
	string pilihan;
	cout<<"a. makan"<<endl<<"b. minum"<<endl<<"c. tidur"<<endl<<"pilih (a,b,c)"<<endl;
	cin>>pilihan;
	if(pilihan=="a"){
		cout<<"if"<<endl<<"anda tidak lapar lagi"<<endl;
	}
	else if(pilihan=="b"){
		cout<<"else if"<<endl<<"anda tidak haus lagi"<<endl;
	}
	else if(pilihan=="c"){
		cout<<"else if"<<endl<<"anda tidak mengantuk lagi"<<endl;
	}
	else{
		cout<<"else"<<endl<<"perintah anda salah"<<endl;
	}
	cout<<"switch case"<<endl;
	int pilih;
	cout<<"1. makan"<<endl;
	cout<<"2. minum"<<endl;
	cout<<"3. tidur"<<endl;
	cout<<"pilih (1,2,3)"<<endl;
	cin>>pilih;
	switch(pilih){
		case 1:
			cout<<"anda tidak lapar lagi"<<endl;
			break;
		case 2:
			cout<<"anda tidak haus lagi"<<endl;
			break;
		case 3:
			cout<<"anda tidak mengantuk lagi"<<endl;
			break;
		default:
			cout<<"perintah anda salah"<<endl;
	}
	spasi();
	cout<<"PENGULANGAN"<<endl;
	cout<<"While"<<endl;
	int w = 1;
	while(w <= 5){
		cout<<"while ke-"<<w<<endl;
		w++	;
	}
	cout<<"do-while"<<endl;
	int d = 1;
	do{
		cout<<"d ke-"<<d<<endl;
		d++ ;
	}while(d <= 5);
	cout<<"for"<<endl;
	for(int f=0;f<=5;f++){
		cout<<"for ke-"<<f<<endl;
	}
	spasi();
	cout<<"PERINTAH-PERINTAH LONCAT"<<endl;
	cout<<"break"<<endl;
	for(int b=0;b<=20;b++){
		cout<<"b ke-"<<b<<endl;
		if(b==10){
			break;
		}
	}
	cout<<"continue"<<endl;
	for(int c=0;c<=10;c++){
		if(c==1||c==3||c==6||c==9)continue;
		cout<<"c ke-"<<c<<endl;
	}
	cin.get();
	return 0;
}
