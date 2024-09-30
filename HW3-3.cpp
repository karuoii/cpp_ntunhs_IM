#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    int arr[100];
    srand(time(0));
    for(int i=0;i<100;i++){
        arr[i]=rand()%11;
    }
    int counts[11]={0};
    for(int num = 0;num<=10;num++){
        for(int i=0;i<100;i++){
        if(arr[i]==num){
            counts[num]++;
        }
    }
    }
    for(int num = 0;num<=10;num++){
    cout<<num<<"出現了"<<counts[num]<<"次"<<endl;
    }
    return 0;
}