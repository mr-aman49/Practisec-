/* you are given N,followed by list of N numbers , Output: the squares of N numbers*/

#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int no;
while(n>0){
cin>>no;
cout<<no*no<<endl;
n=n-1;}
return 0;
}
