/*
Gokul Krishna R
Reg No. 20220040
*/

#include<iostream>
using namespace std;

struct phone{
int area_code,exchange,number;
};

int main(){
    
    struct phone p1,p2;

    p1.area_code=212;
    p1.exchange=767;
    p1.number=8900;

    cout<<"Enter your area code, exchange, and number : ";
    cin>>p2.area_code>>p2.exchange>>p2.number;

    cout<<"My number is ("<<p1.area_code<<") "<<p1.exchange<<"-"<<p1.number<<endl;
    cout<<"Your number is ("<<p2.area_code<<") "<<p2.exchange<<"-"<<p2.number<<endl;

    return 0;
}

