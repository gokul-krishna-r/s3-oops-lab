/*
Gokul Krishna R
Reg No. 20220040
*/

#include<iostream>
using namespace std;


class number{
	public:
		int num1,num2;
		void printValue(){
			cout<<"num1 = "<<num1<<" num2 = "<<num2<<endl<<endl;	
		}
		void swap1(int a,int b){
			int temp;
			temp=a;
			a=b;
			b=temp;
		}		
		void swap2(int *a,int *b){
			int temp;
			temp=*a;
			*a=*b;
			*b=temp;
		}
};




int main(){
	
	number a;
	cout<<"Enter two numbers: ";
	cin>>a.num1>>a.num2;
	cout<<endl<<"The values are ";
	a.printValue();
	a.swap1(a.num1,a.num2);
	cout<<"After swapping using call by value ";
	a.printValue();
	a.swap2(&a.num1,&a.num2);
	cout<<"After swapping using call by address ";
	a.printValue();

return 0;

}



