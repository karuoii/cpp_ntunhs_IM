#include<iostream>
using namespace std;

int main(){
    int arr[100];
    int n;
    cout<<"請輸入陣列大小(最多不超過100)：";
    cin>>n;
    cout<<"請輸入"<<n<<"個元素：";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"反轉後的陣列：";
    for(int i=n-1;i>=0;i--){
        cout<<arr[i];
        if(i>0){
            cout<<" ";
        }
    }
    cout<<endl;
    
    return 0;
}