#include<iostream>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
int arr[n][m];

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
}

int key;
cout<<"Enter Key "<<endl;
cin>>key;
bool flag =false;

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(key==arr[i][j]){
                cout<<i+1<<" "<<j+1<<endl;
            flag=true;
        }
    }
}
if(flag){
    cout<<"Element found";
}
else{
    cout<<"Element not found";
}

}
