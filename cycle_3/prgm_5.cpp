/*
Gokul Krishna R
Reg No. 20220040
*/
#include<iostream>
#include <cmath>
using namespace std;

class PolarCoordn{
    float radius,angle;
    public:
        PolarCoordn(){
            radius=0;
            angle=0;
        }
        PolarCoordn(float radius,float angle){
            this->radius =radius;
            this->angle=angle;
        }
        float getAngle(){
            return angle;
        }
        float getRadius(){
            return radius;
        }
        void display(){
            cout<<"The polar coordinate is ("<<radius<<", "<<angle<<")"<<endl;
        }
};

class RectCoordn{
    float x,y;
    public:
        RectCoordn(){
            x=0;
            y=0;
        }
        RectCoordn(float x,float y){
            this->x =x;
            this->y=y;
        }
        float getX(){
            return x;
        }
        float getY(){
            return y;
        }
        void operator =(PolarCoordn p){
            x=p.getRadius() * cos((p.getAngle()*3.14)/180);
            y=p.getRadius() * sin((p.getAngle()*3.14)/180);
        }
         void display(){
            cout<<"The rectangular coordinate is ("<<x<<", "<<y<<")"<<endl;
        }  
};

int main(){
    float angle,radius;
    cout<<"Enter radius: ";
    cin>>radius;
    cout<<"Enter angle: ";
    cin>>angle;
    PolarCoordn p1(radius,angle);
    RectCoordn r1;
    p1.display();
    r1=p1;
    r1.display();
    return 0;
}