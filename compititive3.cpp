/* Given a binary number help Von Neuman to find out its decimal representation. for eg 000111 in binary is 7 in decimal.*/
/* Sample output*/
#include<iostream>
using namespace std;
int main(){
int no;
int n;
cin>>n;
while(n>0){

cin>>no;
int p=1;
int ans =0;
while(no>0)
{
int r = no%10;
 ans= ans + r*p;
p=p*2;
no=no/10;
}
cout<<ans<<endl;
n=n-1;
}

return 0;}
