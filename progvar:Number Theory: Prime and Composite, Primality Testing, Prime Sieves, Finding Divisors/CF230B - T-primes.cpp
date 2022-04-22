#include<bits/stdc++.h>

using namespace std;
 

int main(){


    long long number_of_numbers;
    cin>>number_of_numbers;
    long long number;
    while(number_of_numbers--){
        cin>>number;
        long long sr = sqrt(number);
        if(sr*sr==number && number >3){
            bool flag=true;
            for(int j=2;j*j<=sr;j++){
                if(sr%j==0){
                    flag=false;
                    break;
                }
            }
            if(flag){
                cout<<"YES"<<endl;
            }else cout<<"NO"<<endl;

        }
        else cout<<"NO"<<endl;
    }

    return 0;
}
 