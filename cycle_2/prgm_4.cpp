/*
Gokul Krishna R
Reg No. 20220040
*/


#include<iostream>
#include<cmath>

using namespace std;


class number{


	public:
		double power(double n,int p){
			cout<<"double: ";
			return pow(n,p);
		}

		double power(int n,int p){
			cout<<"int: ";
			return pow(n,p);
		}

		double power(char n,int p){
			cout<<"char: ";
			return pow(n,p);
		}
		
};



int main(){
	number n1;
	double a;
	int p,q;
	char c;
	cout<<"Enter a double and int value :";
	cin>>a>>p;
	cout<<"The value is "<<n1.power(a,p)<<endl;
	cout<<"Enter two int values :";
	cin>>q>>p;
	cout<<"The value is "<<n1.power(q,p)<<endl;
	cout<<"Enter a char and int value :";
	cin>>c>>p;
	cout<<"The value is "<<n1.power(c,p)<<endl;

return 0;

}
