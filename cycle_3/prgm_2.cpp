/*
Gokul Krishna R
Reg No. 20220040
*/

#include<iostream>
using namespace std;

class Dist{
    private:
        float feet;
        float inch;
    public:
        void setData()
        {
            cout<<"Enter the distance in feet : ";
            cin>>feet;
            cout<<"Enter the distance in inches : ";
            cin>>inch;
        }
      
        float getFeet(){
            return feet;
        }
        float getInch(){
            return inch;
        }
        void display(){
            cout<<feet<<" feet and "<<inch<<" inch "<<endl;
        }

        friend Dist operator +(Dist,Dist);  

        Dist operator<(Dist d){
            float inch1 = (this->feet*12)+this->inch;
            float inch2 = (d.feet*12)+d.inch;

            if(inch1<inch2){
                cout<<feet<<" feet and "<<inch<<" inch is less than "<<d.feet<<" feet and "<<d.inch<<" inch"<<endl;
            }else if(inch1==inch2){
				cout<<"Both distances are equal"<<endl;
			}else{
                cout<<d.feet<<" feet and "<<d.inch<<" inch is less than "<<feet<<" feet and "<<inch<<" inch"<<endl;
            }
        }
};

Dist operator +(Dist d1,Dist d2){
    Dist d3;
    d3.feet=d1.feet+d2.feet;
    d3.inch=d1.inch+d2.inch;
     if(d3.inch>=12){
        d3.feet++;
        d3.inch -= 12;
    }
    return d3;

}

int main()
{
    Dist d1,d2,d3;
    d1.setData();
    d2.setData();
    d3=d1+d2;
    d3.display();
    d1<d2;
    return 0;
}
