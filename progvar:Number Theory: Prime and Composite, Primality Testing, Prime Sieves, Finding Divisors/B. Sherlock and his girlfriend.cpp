#include<bits/stdc++.h>
 
using namespace std;
 
int prime[1000001];
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
    int p=sieve(n+1);
   
    if(n>2)cout<<2<<endl;
    else cout<<1<<endl;
    for (int i = 2; i < n+2; ++i)
    {
        if(prime[i]==1){
            cout<<1<<" ";
        }else{
            cout<<2<<" ";
        }
    }
    return 0;
}
 