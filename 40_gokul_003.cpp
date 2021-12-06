#include<iostream>
#include<string>  
using namespace std;

class bankAcc{

    private:
        float balance;
        int accountNumber;
        string name,acType;
    public:
        void addInfo(){
            
            cout<<"Enter account holder name: ";
            getline(cin,name); 
            cout<<"Enter account type: ";
            getline(cin,acType);
            cout<<"Enter account number: ";
            cin>>accountNumber; 
            cout<<"Enter Balance Amount: ";
            cin>>balance;
        }
        void showInfo(){
            cout<<"Name: "<<name<<endl<<"Account Type: "<<acType<<endl<<"Account Number: "<<accountNumber<<endl<<"Balance Amount: "<<balance<<endl;
        }
        void deposit(){
            float amt;
            cout<<"Enter the amount deposited: ";
            cin>>amt;
            balance+=amt;
            cout<<"Total Account Balance: "<<balance<<endl;
        }
        void withdrawAmt(){
            float amt;
            cout<<"Enter amount to be withdrawn: ";
            cin>>amt;

            if(amt>balance){
                cout<<"Not enough account balance"<<endl;
            }else{
                balance-=amt;
            }
            cout<<"Total Account Balance: "<<balance<<endl;
        }
};
int main(){
    bankAcc b1;
    int choice;
    b1.addInfo();
    cout<<"1.Deposit"<<endl<<"2.Withdraw"<<endl<<"3.Account Details"<<endl<<"4.Exit"<<endl;
    
    do{
    cout<<endl<<"Enter Choice: ";
    cin>>choice;
    switch(choice){
            case 1:
                b1.deposit();
                break;
            case 2:
                b1.withdrawAmt();
                break;
            case 3:
                b1.showInfo();
                break;
            case 4:
                break;
            default:
                cout<<"Some Error Occured";

    }
    }while(choice!=4);


    return 0;
}

