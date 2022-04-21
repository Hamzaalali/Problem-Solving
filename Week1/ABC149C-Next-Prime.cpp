#include<bits/stdc++.h>

using namespace std;
 

int main(){

    int number;
    cin>>number;
    int i=number;
    while(true){
        bool flag=true;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<i;
            return 0;
        }
        i++;
    }
    return 0;
}
 