#include<iostream>
using namespace std;
int gcd(int a,int b){
if(b==0){
    return a;
}
    else{
        return gcd(b,a%b);
    }
}
int lcm(int a,int b){
return (a*b)/gcd(a,b);
}
int main(){
int a,b;
cout<<"Enter a number:";
cin>>a;
cout<<"Enter b number:";
cin>>b;
int gcdresult=gcd(a,b);
int lcmresult=lcm(a,b);
cout<<"GCD IS :"<<gcdresult<<endl;
cout<<"LCM IS :"<<lcmresult<<endl;
return 0;
}
