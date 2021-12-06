#include<iostream>
using namespace std;

class AvgClass{
    private:
        static int array[20];
        static int n;
        int multiplier;
    public:
        void readValue(){
            cout<<"Enter the number of elements of the array: ";
            cin>>n;
            cout<<"Enter the elements of the array: ";
            for(int i=0;i<n;i++){
                cin>>array[i];
            }
        }
        static void avg(){
            float avg=0;
            for(int i=0;i<n;i++){
                avg=avg+array[i];
            }
            cout<<"The avg is "<<avg/n<<endl;
        }

        void multiply(){
            cout<<"Enter multiplier: ";
            cin>>multiplier;

            for(int i=0;i<n;i++){
                array[i]*=multiplier;
            }
        }

        void sort(){
            int temp;
            for(int i=0;i<n;i++){
                for(int j=0;j<n-i-1;j++){
                    if(array[j]>array[j+1]){
                    temp=array[j];
                    array[j]=array[j+1];
                    array[j+1]=temp;
                    }
                }
            }

            for(int i=0;i<n;i++){
                cout<<array[i]<<" ";
            }
        }
};

int AvgClass::array[];
int AvgClass::n=0;
int main(){
    AvgClass obj1,obj2,obj3;
    obj1.readValue();
    obj1.avg();
    obj2.multiply();
    obj1.avg();
    obj3.sort();
    return 0;
}