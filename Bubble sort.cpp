#include<iostream>
using namespace std;
int t=0;
void bubble(int arr[],int s)
{
    bool c=false;
     for(int i=0;i<s;i++){
         for(int j=0;j<s-i-1;j++){
            int temp;
            if(arr[j]>arr[j+1]){
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                c=true;
            }
            if(c==false){
                break;
            }
            t++;
         }
     }
      for(int i=0;i<s;i++){
        cout<<arr[i]<<"\t";
      }
      cout<<"\n"<<"c="<<c;


}

 int main(){
 int arr[]={9,8,7,6,5,0,3,5,1,9};
 int s= sizeof(arr)/sizeof(arr[0]);
 for(int i=0;i<s;i++){
    cout<<arr[i]<<"\t";

 }
 cout<<"\n after appling bubble sort\n";
 bubble(arr,s);
 cout<<"\n counter="<<t<<"\t";
 }
