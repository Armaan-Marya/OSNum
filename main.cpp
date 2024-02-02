#include<iostream>
using namespace std;
class nopriority{
public:
    int A[100][4];
    int bt,wt,tat,n;
    nopriority(){
        cout<<"Enter number of Processes: "<<endl;
        cin>>n;
        cout<<"Enter Burst Times: "<<endl;
        for(int i=0;i<n;i++){
            cout<<"Enter time of P"<<i+1<<": ";
            cin>>A[i][1];
            A[i][0]=i+1;
        }
        for(int i=0;i<n;i++)
            cout<<A[i][0]<<"  "<<A[i][1]<<endl;
    }
};
int main(){
    nopriority obj;

    return 0;
}