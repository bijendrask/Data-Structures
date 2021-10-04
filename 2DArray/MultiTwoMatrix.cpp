#include<iostream>
using namespace std;
int main(){
int n1,n2,n3;
cin>>n1 >>n2 >>n3;

int arr[n1][n2];
int arr1[n2][n3];
int ans[n2][n3];

for(int i=0;i<n1;i++){
    for(int j=0;j<n2;j++){
        cin>>arr[i][j];
}

for(int i=0;i<n2;i++){
    for(int j=0;j<n3;j++){
        cin>>arr[i][j];
}


for(int i=0;i<n1;i++){
    for(int j=0;j<n2;j++){
       for(int k=0;k<n3;k++){
        ans[i][j]=arr[i][j]*arr1[i][j];
        cout<<ans[i][j];
       }
    }
    cout<<endl;
}

}
