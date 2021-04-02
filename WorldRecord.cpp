#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        double k1,k2,k3,v,time,rtime;
        cin>>k1>>k2>>k3>>v;
        time = 100.0/(k1*k2*k3*v);
        rtime = floor((time * 100) + .5) / 100;
        
        if(rtime<9.58){
            cout<<"YES\n";
        } else{
            cout<<"NO\n";
        }        
    }
    return 0;
}