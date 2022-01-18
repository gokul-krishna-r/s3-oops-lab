/*
Gokul Krishna R
Reg No. 20220040
*/
#include<iostream>
using namespace std;

class Distance{
    int feet;
    float inch;
    public:
        Distance(int x,float y){
            feet=x;
            inch=y;
        }
        Distance(){
            feet = 0;
            inch = 0.0;
        }
        void setData(){
            cout<<"Enter distance in feet: ";
            cin>>feet;
            cout<<"Enter distance in inches: ";
            cin>>inch;
     
        }
        Distance(float metres){
            
            float length = (100*metres)/2.54;
            feet =(int)length/12;
            inch = length - 12 * feet;
        }
    
        void show(){
            cout<<"Distance is "<<feet<<"feet + "<<inch<<"inch"<<endl<<endl;
        }
        operator float(){
            return feet * 0.30408 + inch * 0.0254;
        } 
};

int main(){
    Distance d1;
    int choice;
    float metres;
    do{
    cout<<"1. Meter to feet and inches"<<endl<<"2. Feet and inches to Meter"<<endl<<"3. Exit"<<endl<<"Enter Choice: ";
    cin>>choice;
    switch(choice){
        case 1:
            cout<<"Enter distance in metres: ";
            cin>>metres;
            d1=metres;
            d1.show();
            break;
        case 2:
            d1.setData();
            metres=d1;
            cout<<"Distance is "<<metres<<" metres"<<endl<<endl;
            break;
        default:
            cout<<"Some error occured";
    }
    }while(choice!=3);
    return 0;
}