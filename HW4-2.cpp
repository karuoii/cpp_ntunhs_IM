#include <iostream>
using namespace std;

// 非遞迴函式：計算兩個數字的最大公因數（GCD）
int gcd(int a, int b) {
    if(b==0){
        return a;
    }else{
    return gcd(b,a%b);
    }
}

int main() {
    int a, b;
    
    // 輸入兩個數字
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // 計算並輸出最大公因數
    cout << "The GCD of " << a << " and " << b << " is: " << gcd(a, b) << endl;

    return 0;
}
