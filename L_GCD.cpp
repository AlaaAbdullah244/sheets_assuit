#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    int max;
    if(x>y){
        for(int i=1;i<=x;i++){
           if(x%i==0 && y%i==0){
                max=i;
            }
        }cout<<max;
    }
    else if(y>x){
        for(int i=1;i<=x;i++){
            if(x%i==0 && y%i==0){
                max=i;
            }
        }cout<<max;
    }
    else if(x==y){
        cout<<x;
    }
    
}