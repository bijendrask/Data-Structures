#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];

for(int i=0;i<n;i++){
    cin>>arr[i];
}

int coun=1;
int pcoun=1;
int i=0;
int j=i+1;
int pd=arr[i+1]-arr[i];

while(j<n){

    int sum=arr[j+1]-arr[j];
        if(sum!=pd){
            pd=sum;
            if(coun>pcoun){
                pcoun=coun;
                coun=1;
            }
        }
        else{
            coun++;
        }
 j++;
}
cout<<pcoun;
}
