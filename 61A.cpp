#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string a;
    string b;
    cin>>a>>b;
    int i=0;
    while(a[i]!='\0') {
        if(a[i]==b[i]){
            cout<<"0";
        }
        else{
            cout<<"1";
        }
        i++;
    } 
    return 0;
}