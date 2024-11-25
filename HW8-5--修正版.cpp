#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// 檢查時間格式是否正確,並將時間轉換為分鐘數,返回分鐘數
int parsetime(const string timestr){
    if(timestr.length() != 5 || timestr[2] != ':'){
        return -1;  //格式不正確(格式非五碼、中間不是冒號)
    }
    
    int hour = (timestr[0] - '0') * 10 + (timestr[1] - '0');  //解析小時
    int minute = (timestr[3] - '0') * 10 + (timestr[4] - '0');  //解析分鐘
    
    if(hour < 0 || hour >= 24 || minute < 0 || minute >= 60){
        return -1;  //時間超出正常範圍
    }
    
    return hour * 60 +minute;  //傳回總分鐘數
}

//計算停車費
int car(int startminutes, int endminutes){
    int totalminutes = endminutes - startminutes;
    
    if(totalminutes <= 0){
        return -1;  //時間錯誤或離開時間早於進入時間
    }
    
    int fee = 0;
    
    //小於等於2小時
    if(totalminutes <= 120){
        fee += (totalminutes + 29) / 30 * 30;  //未滿半小時不計費
    }
    
    //超過2小時但不超過4小時
    else if(totalminutes <= 240){
        fee += 120 / 30 * 30;  //計算前2小時
        fee += (totalminutes - 120 + 29) / 30 * 40;  //超過2小時，每半小時40元
    }
    
    //超過4小時
    else{
        fee += 120 / 30 * 30;  //計算前2小時
        fee += 120 / 30 * 40;  //計算2~4小時
        fee += (totalminutes - 240 + 29) / 30 * 60;  //超過4小時，每半小時60元
    }
    
    return fee;
}

int main(){
    const int MAX_LINES = 100;
    string starttimes[MAX_LINES], endtimes[MAX_LINES];
    int linecount = 0;
    cout << "請輸入開始與離開時間(一行一組，輸入空行即結束)：" << endl;
    
    //讀取多組資料，最多MAX_LINES行
    while(linecount < MAX_LINES){
        string line;
        getline(cin, line);
        
        if(line.empty()){
            break;  //出現空行即結束輸入
        }
        
        int spacepos = -1;
        for(int i = 0; i < line.length(); i++){
            if (line[i] == ' '){
                spacepos = i; //找到第一個空格的位置
                break;
            }
        }
        
        if(spacepos == -1){
            starttimes[linecount] = "錯誤";
            endtimes[linecount] = "錯誤";
        }else{
            starttimes[linecount] = line.substr(0, spacepos);  //提取開始時間
            endtimes[linecount] = line.substr(spacepos + 1);  //提取結束時間
        }
        
        linecount++;
    }
    
    //處理輸入並計算費用
    for (int i = 0; i < linecount; i++){
        int startminutes = parsetime(starttimes[i]);
        int endminutes = parsetime(endtimes[i]);
        
        if(startminutes == -1 || endminutes == -1){
            cout << "錯誤" << endl;
        }else{
            int fee = car(startminutes, endminutes);
            if(fee == -1){
                cout << "錯誤" << endl;
            }else{
                cout << fee << endl;
            }
        }
    }
    return 0;
}

    
    
    
    
    
    