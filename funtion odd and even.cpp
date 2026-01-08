#include<iostream>
using namespace std;
void checkoddeven(int n){
    if(n%2==0){
        cout<<"This number is even.";
    }
    else{
        cout<<"This number is odd.";
    }
}
int main(){
checkoddeven(5);
return 0;
}
