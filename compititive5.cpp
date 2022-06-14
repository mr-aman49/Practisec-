// Square root of the number without using any predefined functions

#include<iostream>
using namespace std;

int main(){
int N;
int P;
cin>>N>>P;
float ans=0;
float inc=1.0;
for(int times=0;times<=P;times++){
        //Finalise the correct digit for the current place
while(ans*ans<=N){
ans=ans+inc;
}
ans =ans-inc;
// Updates the increment for the next
inc=inc/10;
}
cout<<ans<<endl;
return 0;
}
