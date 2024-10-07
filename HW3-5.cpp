#include<iostream>

using namespace std;

int main(){
    string classname;
    string number;
    string name;
    cout<<"請輸入你的班級：";
    getline(cin,classname);
    cout<<"請輸入你的學號：";
    getline(cin,number);
    cout<<"請輸入你的名字：";
    getline(cin,name);
    
    cout<<"\n輸入的資料如下："<<endl;
    cout<<"班級："<<classname<<endl;
    cout<<"學號："<<number<<endl;
    cout<<"名字："<<name<<endl;
    
    return 0;
}