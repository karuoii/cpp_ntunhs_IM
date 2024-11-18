#include <iostream>
#include <iomanip>
#include <cmath>  
using namespace std;

int main() {
    double num[5];  
    double sum=0;    
    double mean=0;    
    double var=0;
    double sd=0;  

      cout<<"請輸入五個數字: ";
    for(int i=0;i<5;i++){
        cin>>num[i];
        sum+=num[i];
    }

      mean=sum/5;

    for(int i=0;i<5;i++){
        var+=(num[i]-mean)*(num[i]-mean);
    }
    var/=5;

    sd=sqrt(var);

   
    cout<<fixed<<setprecision(2);
    cout<<"平均數："<<mean<<endl;
    cout<<"變異數："<<var<<endl;
    cout<<"標準差："<<sd<<endl;

    return 0;
}