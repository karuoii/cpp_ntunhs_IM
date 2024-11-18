#include <iostream>
using namespace std;

// 將數字轉換為羅馬數字的函數
string Roman(int n){
    if(n >= 10){
        if(n >= 90) return "XC" + Roman(n - 90);
        if(n >= 50) return "L" + Roman(n - 50);
        if(n >= 40) return "XL" + Roman(n - 40);
        return"X"+Roman(n - 10);
    }
    if(n >= 5){
        if (n >= 9) return "IX" + Roman(n - 9);
        return "V" + Roman(n - 5);
    }
    if (n >= 4) return "IV" + Roman(n - 4);
    if (n >= 1) return "I" + Roman(n - 1);
    return "";
}

int main() {
    int n;
    cout << "請輸入一個正整數小於100: ";
    cin >> n;

    if (n <= 0 || n >= 100) {
        cout << "錯誤：請輸入一個正整數並且小於100。" << endl;
    } else {
        cout << Roman(n) << endl;
    }

    return 0;
}