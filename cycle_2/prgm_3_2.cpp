/*
Gokul Krishna R
Reg No. 20220040
*/

#include<iostream>
using namespace std;


class number{
	public:
		int num;
		int printValue(){
			return num;	
		}
		void swap1(number n1,number n2){
			int temp;
			temp=n1.num;
			n1.num=n2.num;
			n2.num=temp;
		}
		void swap2(number &n1,number &n2){
			int temp;
			temp=n1.num;
			n1.num=n2.num;
			n2.num=temp;
		} 
		void swap3(number *n1,number *n2){
			int temp;
			temp=n1->num;
			n1->num=n2->num;
			n2->num=temp;
		}
};




int main(){
	
	number n1,n2;
	int choice;
	cout<<"Enter two numbers: ";
	cin>>n1.num>>n2.num;
	cout<<"The values are "<<endl;
	cout<<"n1: "<<n1.printValue()<<endl;
	cout<<"n2: "<<n2.printValue()<<endl;
	cout<<"1. Call by Value"<<endl<<"2. Call by Reference"<<endl<<"3. Call by Address"<<endl<<"4. Exit"<<endl;
	
	do{
		cout<<"Enter choice: ";
		cin>>choice;
		switch(choice){
			case 1:
				n1.swap1(n1,n2);
				cout<<"Swapping using call by value "<<endl;
				cout<<"n1: "<<n1.printValue()<<endl;
				cout<<"n2: "<<n2.printValue()<<endl;	
				break;
			case 2:
				n1.swap2(n1,n2);
				cout<<"Swapping using call by reference "<<endl;
				cout<<"n1: "<<n1.printValue()<<endl;
				cout<<"n2: "<<n2.printValue()<<endl;
				break;
			case 3:
				n1.swap3(&n1,&n2);
				cout<<"Swapping using call by address "<<endl;
				cout<<"n1: "<<n1.printValue()<<endl;
				cout<<"n2: "<<n2.printValue()<<endl;
				break;
			case 4:
				break;
			default:
				cout<<"Some Error Occured";
		}
	}
	while(choice!=4);
	

return 0;

}



