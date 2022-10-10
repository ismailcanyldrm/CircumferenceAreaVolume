#include <iostream>
using namespace std;
int main(){
	float r,pi,cc,da,kh,dc;
	cout<<"Yarýçap Ýle Çevre, Alan ve Hacim Hesaplama";
	cout<<"Yarý Çapý Giriniz : ";
	cin>>r;
	pi=3,14;
	cc=2*pi*r;
	da=pi*r*r;
	dc=4*pi*r*r*r;
	kh=dc/3;
	
	cout<<"\n\nÇemberin Çevresi: "<<cc<<endl;
	cout<<"Dairenin Alaný: "<<da<<endl;
	cout<<"Kürenin Hacmi: "<<kh<<endl;	
	return 0;	
}
