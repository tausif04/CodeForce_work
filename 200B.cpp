#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,k;
    cin>>n;
    for(int i=0;i<n;i++){
       cin>>k;
       sum+=k;
    }
    double avg= (double)sum/n;
    cout<<avg<<endl;
  return 0;
} 
