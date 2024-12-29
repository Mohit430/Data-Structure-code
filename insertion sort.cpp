#include<iostream>
using namespace std;
int t=0;
void insrt(int arr[],int s){
    bool c=false;
 for(int i=0;i<s;i++){
    int mn=i;
    while(mn>0&&arr[mn]<arr[mn-1]){
        int temp;
        temp=arr[mn];
        arr[mn]=arr[mn-1];
        arr[mn-1]=temp;

        mn--;
        c=true;
         if(c==false){
        break;
    }
    t++;;
 }
    }

  for(int i=0;i<s;i++){
    cout<<arr[i]<<"\t";
  }
  cout<<"\n"<<"c="<<c;
}


int main(){
 int arr[]={8,2,5,9,1};
 int s= sizeof(arr)/sizeof(arr[0]);
 for(int i=0;i<s;i++){
    cout<<arr[i]<<"\t";

 }
 cout<<"\n after appling insertion  sort\n";
 insrt(arr,s);
 cout<<"\n counter="<<t<<"\t";

 }
