#include<iostream>
#include<climits>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];

int cnt = 0,pvcount = INT_MIN;

for(int i=0;i<n;i++){
    cin>>arr[i];
}

for(int i=0;i<n;i++){
    if(arr[i]==0){
        cnt++;
    }
    if(arr[i]==1){
        if(cnt>pvcount){
            pvcount=cnt;
        }
        cnt=0;
        }

    }
cout<<pvcount;
}


