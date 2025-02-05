#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t,a,b,c;
    double q,d;
    cin >> t;

    for(int i=0;i<t;i++){
        cin>>a>>b>>c;
        q=(a+b)/2;
        if(a>b){
           d=a-q;
        }
        else{
            d=b-q;
        }
        
        cout<<ceil(d/c)<<endl; 
    }
    return 0;
}