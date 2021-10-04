#include<iostream>
#include<climits>
using namespace std;
int kadane(int arr[],int n){
int sum=0;
int mx=INT_MIN;
for(int i=0;i<n;i++){
    sum+=arr[i];
    if(sum<0){
        arr[i]=0;
    }
    mx=max(mx,sum);
}
return mx;

}
int main(){
int n;
cin>>n;
int arr[n];

for(int i=0;i<n;i++){
    cin>>arr[i];
}
int nonwrap=kadane(arr,n);
int wrap;

int totalsum=0;
for(int i=0;i<n;i++){
    totalsum+=arr[i];
    arr[i]=-arr[i];
}

wrap=totalsum + kadane(arr,n);
 cout<<max(nonwrap,wrap);
}



