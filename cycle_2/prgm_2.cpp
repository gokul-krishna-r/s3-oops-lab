/*
Gokul Krishna R
Reg No. 20220040
*/

#include<iostream>
#include <cmath>

using namespace std;

inline float shrtDistn(float a,float b,float c);

int main(){
    int x1,x2,x3;
    int y1,y2,y3;
    float a,b,c;

    cout<<"Enter first coordinate: ";
    cin>>x1>>y1;
    cout<<"Enter second coordinate: ";
    cin>>x2>>y2;
    cout<<"Enter third coordinate: ";
    cin>>x3>>y3;

    a=sqrt((pow(x1-x2,2) + pow(y1-y2,2)));
    b=sqrt((pow(x2-x3,2) + pow(y2-y3,2)));
    c=sqrt((pow(x3-x1,2) + pow(y3-y1,2)));

    
    cout<<a<<" "<<b<<" "<<c<<endl;
    cout<<"The shortest Distance is "<<shrtDistn(a,b,c)<<endl;
    if(a+b<=c||b+c<=a||a+c<=b){
        cout<<"The triangle is invalid";
    }else{
        cout<<"The triangle is valid";
    }

    return 0;
}

inline float shrtDistn(float a,float b,float c){
    if(a<=b && a<=c){
        return a;
    }else if(b<=a && b<=c){
        return b;
    }else{
        return c;
    }
}

