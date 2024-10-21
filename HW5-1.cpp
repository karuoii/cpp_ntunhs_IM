#include<iostream>
#include<string>
using namespace std;

struct student{
    string name;
    int chinese;
    int english;
    int math;
};

char calculategrade(float average){
    if(average>=90){
        return 'A';
    }else if(average>=80){
        return 'B';
    }else if(average>=70){
        return 'C';
    }else if(average>=60){
        return 'D';
    }else{
        return 'F';
    }
}

int main(){
    student studentA;
    int numstudents;
    cout<<"輸入學生數量：";
    cin>>numstudents;
    student students[numstudents];
    
    int maxtotal=-1;
    int top=-1;

for(int i=0;i<numstudents;i++){
    cout<<"輸入第"<<i+1<<"位學生姓名：";
    cin>>students[i].name;
    cout<<"輸入"<<students[i].name<<"國文成績：";
    cin>>students[i].chinese;
    cout<<"輸入"<<students[i].name<<"英文成績：";
    cin>>students[i].english;
    cout<<"輸入"<<students[i].name<<"數學成績：";
    cin>>students[i].math;
    
    int total=students[i].chinese+students[i].english+students[i].math;
    if(total>maxtotal){
        maxtotal=total;
        top=i;
    }
}

for(int i=0;i<numstudents;i++){
    int total=students[i].chinese+students[i].english+students[i].math;
    float average=total/3.0;
    char grade=calculategrade(average);
    
    cout<<"\n學生："<<students[i].name<<endl;
    cout<<"國文成績："<<students[i].chinese<<endl;
    cout<<"英文成績："<<students[i].english<<endl;
    cout<<"數學成績："<<students[i].math<<endl;
    cout<<"總成績："<<total<<endl;
    cout<<"平均成績："<<average<<endl;
    cout<<"學生成績等級："<<grade<<endl;
}

if(top!=-1){
    cout<<"\n第一名的學生是："<<students[top].name<<endl;
    cout<<"總成績："<<maxtotal<<endl;
}
    return 0;
}