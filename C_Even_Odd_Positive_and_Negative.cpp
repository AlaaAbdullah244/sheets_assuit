#include<iostream>
using namespace std;
int main(){
    
    int n;
    cin >> n;
    int a=0,b=0,c=0,d=0;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        if(m==0){
            ++b;
        }
        else if(m<0){
            ++a;
         if(m%2==0){
            ++b;}
         else if(m%2!=0){
            ++c;}}
        else{     
            ++d;
         if(m%2==0){
            ++b;}
         else if(m%2!=0){
            ++c;}}
        
    }
    
    cout<<"Even: "<<b<<endl;
    cout<<"Odd: "<<c<<endl;
    cout<<"Positive: "<<d<<endl;
    cout<<"Negative: "<<a;

    
    
}
