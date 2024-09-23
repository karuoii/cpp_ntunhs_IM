#include <iostream>
using namespace std;

int main() {
    float op1, op2, result = 0.0f;
    char oper;

    // 提示使用者輸入第一個操作數、運算符號和第二個操作數
    cout << "請依序輸入算式 (例如: 5 + 3):" << endl;
    
    // 依次輸入第一個操作數，運算符號，第二個操作數
    cin >> op1 >> oper >> op2;

    // 使用 switch 來進行計算
    switch(oper){
        case'+':
            result=op1+op2;
            break;
        case'-':
            result=op1-op2;
            break;
        case'*':
            result=op1*op2;
            break;
        case'/':
            if(op2 !=0)
               result=op1/op2;
            else{
                cout<<"除數不能為!\n";
                return 1;
            }
            break;
        default:
            cout<<"輸入錯誤的運算符號\n";
            return 1;
    }
    
    // 輸出結果
    cout << op1 << " " << oper << " " << op2 << " = " << result << endl;

    return 0;
}

