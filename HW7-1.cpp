#include<iostream>
using namespace std;

int main(){
    int h;
    cout<<"請輸入菱形高度(奇數)：";
    cin>>h;
    if(h%2==0){
        cout<<"高度必須輸入奇數！";
        return 1;
    }
    
    int num=h/2;
    
    for(int i=0;i<=num;i++){
        for(int j=0;j<num-i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    for(int i=num-1;i>=0;i--){
        for(int j=0;j<num-i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}