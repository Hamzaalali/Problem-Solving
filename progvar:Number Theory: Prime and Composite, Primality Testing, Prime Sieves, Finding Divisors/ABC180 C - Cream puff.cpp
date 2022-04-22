#include<bits/stdc++.h>

using namespace std;
 

int main(){

    long long number;
    cin>>number;
    vector<long long>numbers;
    for (long long i = 1; i * i <= number; ++i)
    {
        if(number%i==0){
            if(i*i!=number)cout<<i<<endl;
            numbers.push_back(number/i);
        }
    }
    for(long long i = numbers.size()-1; i  >= 0; --i){
        cout<<numbers[i]<<endl;
    }
    return 0;
}
 