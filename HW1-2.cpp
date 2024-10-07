#include<iostream>
#include<cmath>
char classname[100];
int number;
char name[100];
using namespace std;
int main(void)
{
    cout<<"請輸入班級：";
    cin>>classname;
    cout<<"請輸入學號：";
    cin>>number;
    cout<<"請輸入姓名：";
    cin>>name;
    cout<<classname<<" "<<number<<" "<<name<<" "<<endl;
    return 0;
}
