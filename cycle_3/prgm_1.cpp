/*
Gokul Krishna R
Reg No. 20220040
*/
#include<iostream>
using namespace std;

bool leapyear(int year){
	if (year % 400 == 0){
		return true;
	}
	if (year % 100 == 0){
		return false;
	}
	if (year % 4 == 0){
		return true;
	}
	return false;
	}

bool validator(int day,int month,int year){
	if(year<0){
		return false;
	}
	if(month<1||month>12){
		return false;
	}
	if(day<1||day>31){
		return false;
	}
	if(month==2){
		if(leapyear(year)){
			if(day>29){
				return false;
			}
		}
		else{
				if(day>28){
					return false;
				}
			}
	}
	if (month ==4||month==6||month==9||month==11){
		if(day>30){
			return false;
		}
	}
return true;
}
class Date{
	private:
		int day,month,year,flag;
	public:
		Date(int d,int m,int y){
			day=d;
			month=m;
			year=y;
		}

		Date operator +(int a){
			if(validator(day,month,year)){
			flag=1;
			day+=a;
			do{
            if(day>31 && (month==1||month==3||month==5||month==7||month==8||month==10||month==12)){
				day=day-31;
				if(month==12){
					year=year+1;
					month=1;
				}else{
					month=month+1;
				}
			}else if(day>30 && (month==4||month==6||month==9||month==11)){
				day=day-30;
				if(month==12){
					year=year+1;
					month=1;
				}else{
					month=month+1;
				}
			}else if((month==2)&&(day>28)){
               if(leapyear(year)){
				  day=day-29;
                  month=3;

               }
               else{
				  day=day-28;
                  month=3;
                   }
            }
		}while(day>31);
		}else{
			//Date is invalid
			flag=0;
			}		
		}

		void display(){
			cout<<"The date is "<<day<<"/"<<month<<"/"<<year<<endl;
		
		}
		int getFlag(){
			return flag;
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
	if(d.getFlag()){
		d.display();
	}else{
		cout<<"Date is invalid"<<endl;
	}
	
	
return 0;
}

