// Given a number N, print sum of all even numbers from 1 to N.
#include<iostream>
using namespace std;


int main(){

       int n;
       int i=0;
       cin>>n;
       int sum=0;
       while(i<=n){
           sum=sum+i;
           i=i+2;
       }
       cout<<sum<<endl;

  
}