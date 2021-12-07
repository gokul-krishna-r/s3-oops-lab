/*
Gokul Krishna R
Reg No. 20220040
*/

#include<iostream>
#include<cmath>

using namespace std;


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




int main(){
	
	cout<<"The value is "<<power(2.6899,1)<<endl;
	cout<<"The value is "<<power('a',2)<<endl;
	cout<<"The value is "<<power(2,2)<<endl;
	

return 0;

}
