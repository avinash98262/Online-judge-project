#include<iostream>
using namespace std; 

int main(){
int x; 
cin>>x; 
if(x<100 && x>=50){
cout<<"half century"; 
}
else if(x>=100){
cout<<"century";
}
else {
cout<<-1; 
}
return 0; 
}