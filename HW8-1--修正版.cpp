#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "輸入需要填充的矩陣大小N:";
    cin >> n;
    
    int arr[100][100] = {0}; //定義靜態二維陣列,最大支援 100×100
    int num = 1; //填充的數字
    
   // 填充螺旋矩陣
   for (int i = 0; i < n / 2; i++) {
       int x = i;
       int y = n - 1 - i;
       
        // 第一步,列不變,行依次++
       for (x = i; x <= n - 2 - i; x++) {
           arr[x][y] = num++;
        }
           
        // 第二步,行不變,列依次--
        for ( y = n - 1 - i; y >= i + 1; y--) {
            arr[x][y] = num++;
        }
        
        // 第三步,列不變,行依次
        for ( x = n - 1 - i; x >= i + 1; x--){
            arr [x][y] = num++;
        }
        
        // 第四步,行不變,列依次++ 
        for (y = i; y <= n - 2 - i; y++) {
            arr[x][y] = num++;
        }
    }
    
    // 如果是奇數,填充正中央的數字 
    if (n % 2 != 0) {
        arr[n / 2][n / 2] = num;
    }
    
    // 輸出螺旋矩陣
    cout << "生成的螺旋矩陣如下:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << "\t";  //使用 Tab鍵對齊
        }
        cout << endl;
    }
    return 0;
}
    
    
    