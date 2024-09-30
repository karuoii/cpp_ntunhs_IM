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
    cout<<"你的班級是："<<classname<<endl;
    cout<<"你的學號是："<<number<<endl;
    cout<<"你的名字是："<<name<<endl;
    
    return 0;
}