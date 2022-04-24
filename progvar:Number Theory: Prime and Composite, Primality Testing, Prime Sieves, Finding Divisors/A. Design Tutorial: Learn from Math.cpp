#include<bits/stdc++.h>
 
using namespace std;
 
int prime[10000001];
int sieve(int n){
    for(int i=0;i<=n;i++){
        prime[i]=1;
    }
    prime[1]=prime[0]=0;
    int p=0;
    for(int i=2;i<=n;i++){
        if(prime[i]==1){
            p++;
            for(int j=i*2;j<=n;j+=i){
                prime[j]=0;
            }
        }
    }
    return p;
}
 
int main(){
 
    int n;
    cin>>n; 
    int p=sieve(1000001);
   
    for (int i = 4; i <= n/2; ++i)
    {
        if(prime[i]==0){
            if(prime[n-i]==0){
                cout<<i<<" "<<n-i<<endl;
                return 0;
            }
        }
    }
    return 0;
}
 