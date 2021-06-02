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
typedef int Array[5];
int main(){
	cout<<"ARRAY"<<endl;
	int ar[5];
	int jml[0];
	cout<<"mengisi array dengan for"<<endl;
	for(int n=0;n<=4;n++){
		ar[n]=n;
		cout<<"ar["<<n<<"] = "<<n<<endl;
	}
	for(int e:ar){
		cout<<e<<" ";
	}
	int array[5]={1,2,3,4,5};
	cout<<"\n"<<array[0]<<endl<<array[1]<<endl<<array[2]<<endl<<array[3]<<endl<<array[4]<<endl;
	cout<<"ARRAY 2 DIMENSI"<<endl;
	int duaD[4][3]={
		{2,3,4},
		{4,5,8},
		{1,2,0},
		{7,6,9}
	};
	for(int dq=0;dq<4;dq++){
		for(int dw=0;dw<3;dw++){
			cout<<duaD[dq][dw]<<" ";
		}
		cout<<endl;
	}
	cin.get();
	return 0;
}
