#include<iostream>
using namespace std;
int main(){
    int pcount=0,count = 0,mx=0;
int arr[]={1,1,0,1,1,1};
for(int i=0;i<6;i++){
    if(arr[i]==1){
        count++;
        mx = max(count,mx);
        }
    else
    {
        count = 0;
    }


    }
cout<<mx;
}

