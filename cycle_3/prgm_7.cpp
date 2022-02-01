#include<iostream>
#include<string.h>
using namespace std;

class Student{
    protected:
    int age,reg_no;
    char name[20];
    public:
        Student(){

            age=0;
            reg_no=0;
        }

        Student(char name[20],int age,int reg_no){
            strcpy(this->name,name);
            this->age=age;
            this->reg_no=reg_no;
        }

        void setDate(){
            cin.ignore();
            cout<<"Enter name: ";
            cin.get(name,20,'\n');
            cout<<"Enter age: ";
            cin>>age;
            cout<<"Enter register number: ";
            cin>>reg_no;
        }

        virtual void sort(int n)=0;
    
};

class MTechStud:public Student{
    int gpa;
    public:

        MTechStud(){
            gpa=0;
        }

        MTechStud(int gpa,char name[20],int age,int reg_no):Student(name,age,reg_no){
            this->gpa=gpa;
            strcpy(this->name,name);
            this->age=age;
            this->reg_no=reg_no;
        }

        void setGpa(){
            setDate();
            cout<<"Enter Gpa: ";
            cin>>gpa;
        }
        void sort(int n){
            for (int i=0; i<n-1; i++) {
                for (int j=0; j<n-i-1;j++){
                    if (this[j].gpa > this[j + 1].gpa) {
                        MTechStud temp = this[j];
                        this[j] = this[j + 1];
                        this[j + 1] = temp;
                    }
                    if(this[j].gpa == this[j+1].gpa){
                        if(strcmp(this[j].name,this[j+1].name) > 0){
                            MTechStud temp = this[j]; 
                            this[j] = this[j + 1];
                            this[j + 1] = temp;
                        } 
                     }
                }
            }
        } 
        void display(){
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Reg No.: " << reg_no << endl;
            cout << "GPA: " << gpa << endl << endl;
        }   
};

class BTechStud:public Student{
    int mark;
    public:
        BTechStud(){
            mark=0;
        }
        BTechStud(int mark,char name[20],int age,int reg_no):Student(name,age,reg_no){
            this->mark=mark;
            strcpy(this->name,name);
            this->age=age;
            this->reg_no=reg_no;
        }
        void setMark(){
            setDate();
            cout<<"Enter mark: ";
            cin>>mark;
        }
        
        void sort(int n){
            for (int i=0; i<n-1; i++) {
                for (int j=0; j<n-i-1;j++){
                    if (this[j].mark > this[j + 1].mark) {
                        BTechStud temp = this[j];
                        this[j] = this[j + 1];
                        this[j + 1] = temp;
                    }
                    else if(this[j].mark == this[j+1].mark){
                        if(strcmp(this[j].name,this[j+1].name) > 0){
                            BTechStud temp = this[j]; 
                            this[j] = this[j + 1];
                            this[j + 1] = temp;
                        } 
                     }
                }
            }
        }

        void display(){
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Reg No.: " << reg_no << endl;
            cout << "Marks: " << mark << endl << endl;
        }       
};

int main(){
    int n=0,choice=0;
    BTechStud bs[100];
    MTechStud ms[100];
    Student *s;
    s=bs;
    cout<<endl<<"Select Course: "<<endl<<"1. Btech"<<endl<<"2. MTech"<<endl<<"Enter choice: ";
    cin>>choice;
    switch (choice){
        case 1:
            cout<<"Enter no. of Btech Students: ";
            cin>>n;
            for(int i=0;i<n;i++){
                cout<<"------BTech Student "<<i+1<<"--------"<<endl;
                bs[i].setMark();
            }
            s->sort(n);
            for(int i=0;i<n;i++){
                cout<<"------BTech Student "<<i+1<<"--------"<<endl;
                bs[i].display();
            }
            break;
        case 2:
            cout<<"Enter no. of Mtech Students: ";
            cin>>n;
            s=ms;
            for(int i=0;i<n;i++){
                cout<<"------MTech Student "<<i+1<<"--------"<<endl;
                ms[i].setGpa();
                }
            s->sort(n);
            for(int i=0;i<n;i++){
                cout<<"------MTech Student "<<i+1<<"--------"<<endl;
                ms[i].display();
            }
            break;
        default:
            cout<<"Some error occured";
            break;
    }
    
    
    
}

