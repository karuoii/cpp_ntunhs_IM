#include<iostream>
#include<cmath>
using namespace std;
void addition(double a,double b);
void subtraction(double a,double b);
void multiplication(double a,double b);
void division(double a,double b);
void power(double a,double b);
void squareRoot(double a);
int main(){
    char operation;
    double num1,num2;
    cout<<"輸入一個操作符號(+,-,*,/,^,s for sqrt)：";
    cin>>operation;
    if(operation=='s'){
        cout<<"輸入一個數字：";
        cin>>num1;
        squareRoot(num1);
    }else{
        cout<<"輸入兩個數字：";
        cin>>num1>>num2;
        switch(operation){
            case'+':
                addition(num1,num2);
                break;
            case'-':
                subtraction(num1,num2);
                break;
            case'*':
                multiplication(num1,num2);
                break;
            case'/':
                division(num1,num2);
                break;
            case'^':
                power(num1,num2);
                break;
            default:
                cout<<"錯誤！"<<endl;
                break;
        }
    }
    return 0;
}
void addition(double a,double b){
    cout<<a<<"+"<<b<<"="<<a+b<<endl;
}
void subtraction(double a,double b){
    cout<<a<<"-"<<b<<"="<<a-b<<endl;
}
void multiplication(double a,double b){
    cout<<a<<"*"<<b<<"="<<a*b<<endl;
}
void division(double a,double b){
    if(b!=0){
        cout<<a<<"/"<<b<<"="<<a/b<<endl;
    }else{
        cout<<"錯誤！分母為0。"<<endl;
    }
}
void power(double a,double b){
    cout<<a<<"^"<<b<<"="<<pow(a,b)<<endl;
}
void squareRoot(double a){
    if(a>=0){
        cout<<"開根號("<<a<<")="<<sqrt(a)<<endl;
    }else{
        cout<<"錯誤！負數不能有實數平方根。"<<endl;
    }
}