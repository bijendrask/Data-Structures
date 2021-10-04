#include<iostream>
using namespace std;
int searchpairsum(int arr[],int n,int key){
int low=0;
int high=n-1;
while(low<high){
    if(arr[low]+arr[high]==key){
        cout<<"Get";
        break;
    }
    else if(arr[low]+arr[high]<key){
        low++;
    }
    else if(arr[low]+arr[high]>key){
        high--;
    }
}

}

int main(){
int arr[]={2,4,7,11,14,16,20,21};
int key=31;

searchpairsum(arr,8,key);
}
