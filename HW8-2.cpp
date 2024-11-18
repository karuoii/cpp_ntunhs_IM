#include <iostream>
using namespace std;

int main(){
    int n,s;
    cout<<"請輸入一個數字(N)：";
    cin>>n;

    for(int i=1;i<=n;i++){
        int a=1;
        cout<<"i = "<<i<<endl;
        for(int j=1;j<=i;j++){
            a*=j;  //a=a*j
            cout<<"\tj = "<<j<<endl;
        }
        s+=a;  //1!+2!+...+n!=s  (s=s+a)
    }

    cout<<"1! + 2! + ... + "<<n<<"!= "<<s<<endl;
    return 0;
}