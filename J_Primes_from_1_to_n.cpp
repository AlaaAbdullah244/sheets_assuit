#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    
    bool first= true;
    for(int i=2;i<=num;i++){
        bool isPrime=true;
        for(int j=2;j*j<=i;j++){
        
            if(i%j==0){
                isPrime= false;
                break;
            }
        
            
        }
        if(isPrime){
            if(!first){
                cout<<" ";
            }
        cout<<i;
        first=false;
        } 
    }
    
}