//Problem to find the displacement

#include<iostream>
using namespace std;

int main(){
char ch;
ch = cin.get();
int x=0;
int y=0;
while(ch!='\n'){
if(ch=='N' or ch=='n'){
y++;}
else if(ch=='S' or ch=='s'){
y--;
}
else if(ch=='E' or ch=='e'){
    x++;
}
else{
    x--;
}
ch=cin.get();
}
cout<<"Final Displacement"<<x<< "and" <<y<<endl;
}
