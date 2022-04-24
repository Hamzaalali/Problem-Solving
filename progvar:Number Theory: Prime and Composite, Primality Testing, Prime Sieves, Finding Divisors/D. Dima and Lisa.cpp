#include<bits/stdc++.h>

using namespace std;
 
int prime[10000001];
vector<int>primes;
void sieve(int n){
    for(int i=0;i<=n;i++){
        prime[i]=1;
    }
    prime[1]=prime[0]=0;
    for(int i=2;i<=n;i++){
        if(prime[i]==1){
            primes.push_back(i);
            for(int j=i*2;j<=n;j+=i){
                prime[j]=0;
            }
        }
    }
}
bool checkprime(long long k){
    for(int i = 0; primes[i] * primes[i] <= k; i++){
        if(k % primes[i] == 0) return false;
    }
    return true;
}
int main(){
    sieve(1000000);
    long long n;
    cin>>n;
    if(checkprime(n)){
        cout<<1<<endl;
        cout<<n;
        return 0;
    }
    if(checkprime(n-2)){
        cout<<2<<endl;
        cout<<2<<" "<<n-2;
        return 0;
    }
    int a,b,c;
    for (int i = n-1; i>0; --i)
    {
        if(checkprime(i)){
            a=i;
            break;
        }
    }
    n-=a;
 
    for(int i = 2; ; i++){
        if(checkprime(i) && checkprime(n-i)){
            cout<<3<<endl;
            cout <<a<<" "<< i << " " << n - i;
            break;
        }
    }
 
    return 0;
}
 