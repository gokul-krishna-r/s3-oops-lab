/*
Gokul Krishna R
Reg No. 20220040
*/

#include<iostream>
using namespace std;

class Complex{
	float real,img;
	public:
		Complex(){
			real=0;
			img=0;
		}
		Complex (float a,float b){
			real=a;
			img=b;
		}
		friend ostream& operator <<(ostream& out,Complex &c);
		friend istream& operator >>(istream& in,Complex &c);
	
};

ostream& operator <<(ostream& out,Complex &c){
			out<<c.real<<" + i"<<c.img<<endl;
}
istream& operator >>(istream& in,Complex &c){
			cout<<"Enter real part: ";
			in>>c.real;
			cout<<"Enter imaginary part: ";
			in>>c.img;
}



int main(){
	Complex c;
	cin>>c;
	cout<<c;
	return 0;
}
