#include<iostream>
using namespace std;
//Program to find the sum of numbers from 1 to N
int main(){
   int n;
   cin>>n;

   int sum=0;

   while(n>0){
        int last_digit=n%10;
        sum = sum+last_digit;

        n=n/10;
   }
   cout<<"Sum of digit is"<<sum<<endl;
   return 0;

}
