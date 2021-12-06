#include<iostream>
#include<cmath>
using namespace std;
class triangle{
    private:
        float a,b,c;
    public:
        void inputSides(){
            cout<<"Enter base of the triangle: ";
            cin>>a>>b>>c;
        }
        bool checkValidity(){
            if (a + b <= c || a + c <= b || b + c <= a) {
                cout<<"The triangle is not valid"<<endl; 
                return false;
            }
            else{
                cout<<"The triangle is valid"<<endl; 
                return true;
            }
        }
        void displaySides(){
            cout<<"The sides of the triangle are : "<<a<<" "<<b<<" "<<c<<endl;
        }
        void area(){
            float area;
            float s=(a+b+c)/2;
            area = sqrt(s*(s-a)*(s-b)*(s-c));
            cout<<"The area of the triangle is: "<<area<<endl;
        }
};
int main(){
    triangle t1;
    t1.inputSides();
    if(t1.checkValidity()){
        t1.displaySides();
        t1.area();
    }
    return 0;
}

