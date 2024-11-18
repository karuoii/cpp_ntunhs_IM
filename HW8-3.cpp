#include <iostream>
using namespace std;

int gettriangle(int a,int b,int c){
    if(a<=0||b<=0||c<=0||(a+b<c||a+c<b||b+c<a)){
        cout<<"not triangle"<<endl;
    }else if(a==b&&b==c){
        cout<<"equilateral triangle"<<endl;
    }else if((a==b||a==c||b==c)&&(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)){
        cout<<"isosceles triangle"<<endl;
    }else{
        cout<<"triangle"<<endl;
    }
    return 0;
}

int main(){
    int a,b,c;
    cout<<"輸入三角形三邊長(中間使用空格隔開)：";
    cin>>a,b,c;
    gettriangle(a,b,c);
    return 0;
}