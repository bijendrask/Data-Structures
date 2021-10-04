#include<iostream>
using namespace std;
int main(){
int n=8;
int arr[n]={2,4,7,11,14,16,20,21};
int key=31;

int i=arr[0];
int j=arr[n];
while(i+j==key){
    if(arr[i]+arr[j]<key){
        i++;
    }
    else{
        j++;
    }
    cout<<"Getted";
}

}
