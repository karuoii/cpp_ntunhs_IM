#include<iostream>
using namespace std;

int main(){
    char a,b,c,d,e,f;
    cout<<"請問您最近是否發燒？(y/n)";
    cin>>a;
    if(a=='n'){
        cout<<"正常!!!"<<endl;
        return 0;
    }else{
        cout<<"請問您最近是否咳嗽？(y/n)";
        cin>>b;
        if(b=='y'){
            cout<<"請問您最近是否感覺疲倦？(y/n)";
            cin>>c;
            if(c=='y'){
                cout<<"先生/小姐您可能得感冒!!!"<<endl;
                return 0;
            }else{
                cout<<"先生/小姐您可能是其他系統問題!!!"<<endl;
                return 0;}
        }else{
            cout<<"請問您是否高血壓？(y/n)";
            cin>>d;
            if(d=='y'){
                cout<<"請問您最近是否口乾？(y/n)";
                cin>>e;
                if(e=='y'){
                    cout<<"先生/小姐您可能得肝病!!!"<<endl;
                    return 0;
                }else{
                    cout<<"先生/小姐您可能是其他系統問題!!!"<<endl;
                    return 0;
                }
            
        }else{
            cout<<"請問您最近是否盜汗？(y/n)";
            cin>>f;
            if(f=='y'){
               cout<<"先生/小姐您可能得肺病!!!"<<endl;
               return 0;
            }else{
                cout<<"先生/小姐您可能是其他系統問題!!!"<<endl;
                return 0;
            }
        }
    }
    }
}