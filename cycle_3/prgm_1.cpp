/*
Gokul Krishna R
Reg No. 20220040
*/

#include<iostream>
using namespace std;

class Date{
	private:
		int day,month,year;
	public:
		Date(int d,int m,int y){
			day=d;
			month=m;
			year=y;
		}
		Date operator +(int a){
			
			if(year>0 && 0<month<13&& 0<day<32){
			day+=a;
            if(day>31 && (month==1||month==3||month==5||month==7||month==8||month==10||month==12)){
				day=day-31;
				if(month=12){
					year=year+1;
					month=1;
				}else{
					month=month+1;
				}
			}else if(day>30 && (month==4||month==6||month==9||month==11)){
				day=day-31;
				if(month=12){
					year=year+1;
					month=1;
				}else{
					month=month+1;
				}
			}else if((month==2)&&(day>28)){
               if(year%4==0){
				  day=day-29;
                  month=3;

               }
               else{
				  day=day-28;
                  month=3;
                   }
            }

		}else{
			cout<<"Date is invalid"<<endl;
			}		
					


		}

		void display(){
			cout<<"The date is "<<day<<"/"<<month<<"/"<<year<<endl;
		}
		
};

int main(){
	int day,month,year;
	int n;
	cout<<"Enter date: ";
	cin>>day>>month>>year;
	Date d(day,month,year);
	cout<<"Enter the no of days to increment: ";
	cin>>n;
	d+n;
	d.display();
return 0;
}