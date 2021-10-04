#include<iostream>
using namespace std;
int main()
{
int cont=0,cont1=0;
int max0=0,max1=0;
int arr[]={1,0,1,1,0,1,1,1};
for(int i=0;i<7;i++){
    if(arr[i]==0){
        cont++;
    }
    else if(arr[i]==1){
        if(cont>max0){
            max0=cont;
            cont=0;
        }
    }
}
    cout<<max0;
}
    /*if(arr[i]==1){
        cont1++;
    }
    else if(arr[i]==0){
        if(cont1>max1){
            max1=cont1;
        }
        //max1=max(cont1,max1);
        cont1=0;
    }
}
cout<<max(max0,max1);
*/



