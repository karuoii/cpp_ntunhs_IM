#include<iostream>
using namespace std;

void snake(int n){
    int arr[n][n]; //定義範圍
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=0; 
        }
    }  //將元素起始設為0
    
    int row=0,col=n-1;  //起始位置為第一行及最後一列
    int num=1;  //數字從1開始填
    
    while(num<=n*n){
        arr[row][col]=num++;  //填num到目前位子，並將num+1位下次填充做準備
        
        int newrow=row-1;  //往上一行
        int newcol=col+1;  //往右一個
        
        if(newrow<0||newcol>=n||arr[newrow][newcol]!=0){
            newrow=row+1;
            newcol=col;
        }  //如果越界或已有數字，則往下
        
        row=newrow;  //更新行
        col=newcol;  //更新列
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<"\t";  //輸出一個數，並加上一個tab(i為行，j為列)
        }
        cout<<endl;  //一行結束換行
    }
}

int main(){
    int n;
    cout<<"輸入一個數字(N)：";
    cin>>n;
    
    snake(n);  //用snake函數輸出結果
    return 0;
}