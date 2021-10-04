#include<iostream>
using namespace std;
int main(){
int n,m;
cin>>n>>m;

int arr[n][m];

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }
    }
cout<<"Enter no to find"<<endl;
    int no;
    cin>>no;

    bool flag=false;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==no){
                cout<<i<<" "<<j<<endl;
                flag=true;
            }
        }
    }
    if(true){
            cout<<"i get the no man"<<endl;
    }
    else{
        cout<<"Not Found";
    }
}
