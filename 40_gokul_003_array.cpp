#include<iostream>
#include<string>  
using namespace std;

class bankAcc{

    private:
        float balance[20];
        int accountNumber[20],n;
        string name[20],acType[20];

    public:
        void addInfo(){
            cout<<"Enter number of account holders:";
            cin>>n;

            for(int i=0;i<n;i++){
                cout<<"\t-----------Enter Account Holder "<<i+1<<" Details-----------"<<endl;
                cin.ignore();
                cout<<"Enter account holder name: ";
                getline(cin,name[i]); 
                cout<<"Enter account type: ";
                getline(cin,acType[i]);
                cout<<"Enter account number: ";
                cin>>accountNumber[i]; 
                cout<<"Enter Balance Amount: ";
                cin>>balance[i];
            }
            
        }
        void showInfo(int accNo){
            for(int i=0;i<n;i++){
                if(accNo==accountNumber[i]){
                    cout<<"Name: "<<name[i]<<endl<<"Account Type: "<<acType[i]<<endl<<"Account Number: "<<accountNumber[i]<<endl<<"Balance Amount: "<<balance[i]<<endl;
                    break;
                }
            }
        }
        void deposit(int accNo){
            float amt;
            cout<<"Enter the amount deposited: ";
            cin>>amt;
            for(int i=0;i<n;i++){
                if(accNo==accountNumber[i]){
                    balance[i]+=amt;
                    cout<<"Total Account Balance: "<<balance[i]<<endl;
                }
            
        }
        }
        void withdrawAmt(int accNo){
            float amt;
            cout<<"Enter amount to be withdrawn: ";
            cin>>amt;
            for(int i=0;i<n;i++){
                if(accNo==accountNumber[i]){
                     if(amt>balance[i]){
                        cout<<"Not enough account balance"<<endl;
                    }else{
                        balance[i]-=amt;
                     }
                    cout<<"Total Account Balance: "<<balance[i]<<endl;
                    break;
                }
            }
           
        }
};
int main(){
    bankAcc b1;
    int choice,accNo;
    b1.addInfo();
    cout<<"1.Deposit"<<endl<<"2.Withdraw"<<endl<<"3.Account Details"<<endl<<"4.Exit"<<endl;
    
    do{
    cout<<"Enter user account number: ";
    cin>>accNo;
    cout<<"Enter Choice: ";
    cin>>choice;
    switch(choice){
            case 1:
                b1.deposit(accNo);
                break;
            case 2:
                b1.withdrawAmt(accNo);
                break;
            case 3:
                b1.showInfo(accNo);
                break;
            case 4:
                break;
            default:
                cout<<"Some Error Occured";

    }
    }while(choice!=4);


    return 0;
}

