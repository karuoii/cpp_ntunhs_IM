#include<iostream>
#include<cmath>
using namespace std;

int main(void)
{
    float x,y,i;
    cout<<"輸入本金：";
    cin>>x;
    cout<<"輸入累進週期：";
    cin>>y;
    i=0.05;
    cout<<"FV="<<x*pow(1+i,y)<<endl;
    return 0;
}