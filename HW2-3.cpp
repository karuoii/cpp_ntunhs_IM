#include <iostream>
#include <cstdlib>  // 包含 rand() 和 srand()
#include <ctime>    // 包含 time() 來初始化隨機數
using namespace std;

int main() {
    // 初始化隨機數生成器
    srand(time(0));
    int ans = rand() % 101;  // 生成 0 到 100 之間的隨機數
    int guess = 0;
    int lower=0;
    int upper=100;

    while (true) {
        cout << "請輸入一個"<<lower<<"到"<<upper<<"的數字: ";
        cin >> guess;

        int validate_num = ans - guess;

        if (validate_num > 0) {
            cout << "你猜的答案太小了" << endl;
            lower=guess;
        } else if (validate_num < 0) {
            cout << "你猜的答案太大了" << endl;
            upper=guess;
        } else {
            cout << "你猜對答案了!" << endl;
            break;  // 結束迴圈
        }
    }

    return 0;
}