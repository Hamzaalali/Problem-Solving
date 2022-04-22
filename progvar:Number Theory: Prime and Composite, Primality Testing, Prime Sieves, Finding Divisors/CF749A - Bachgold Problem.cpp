#include<bits/stdc++.h>

using namespace std;
 

int main(){

    long long number;
    cin>>number;
    vector<long long>numbers;
    while(number !=0){
        if(number ==3){
            numbers.push_back(number);
            number=0;
        }else{
            numbers.push_back(2);
            number-=2;
        }
    }
    cout<<numbers.size()<<endl;
    for(long long i = 0; i  < numbers.size(); ++i){
        cout<<numbers[i]<<" ";
    }
    return 0;
}
 