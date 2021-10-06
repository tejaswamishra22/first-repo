#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
srand(time(0));
string str="";
for(int i=0;i<n;i++){
int x=rand();
str+=to_string(x%10);
}
cout<<str;
return 0;
}