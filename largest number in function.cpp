#include<iostream>
using namespace std;
void largestnumber(int arr[],int n){
int largest=arr[0];
for(int i=1;i<n;i++){
    if(largest<arr[i]){
        largest=arr[i];
    }
}
cout<<"Largest Number of array = "<<largest;
}
int main(){
    int n=5;
    int a[]={10,20,30,40,50};
   largestnumber(a,5);
    return 0;
}
