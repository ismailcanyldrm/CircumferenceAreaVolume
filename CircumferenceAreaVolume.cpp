#include <iostream>
using namespace std;
int main(){
	float r,pi,cc,da,kh,dc;
	cout<<"Yar��ap �le �evre, Alan ve Hacim Hesaplama";
	cout<<"Yar� �ap� Giriniz : ";
	cin>>r;
	pi=3,14;
	cc=2*pi*r;
	da=pi*r*r;
	dc=4*pi*r*r*r;
	kh=dc/3;
	
	cout<<"\n\n�emberin �evresi: "<<cc<<endl;
	cout<<"Dairenin Alan�: "<<da<<endl;
	cout<<"K�renin Hacmi: "<<kh<<endl;	
	return 0;	
}
