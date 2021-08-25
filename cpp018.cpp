#include <iostream>
using namespace std;

int main()
{
    int shu;
    cout<<"请输入一个任意的自然数:"<<endl;
    cin>>shu;
    //求输入数字的所以真因子
    int *zhen_yinzi=new int[shu];
    int index=0;
    int sum=0;
    zhen_yinzi[0]=1;
    for(int i=2;i<shu;i++){
        if(shu%i==0){
            index++;
            zhen_yinzi[index]=i;
        }
    }

    for(int j=0;j<=index;j++){
        sum+=zhen_yinzi[j];
    }
    delete[] zhen_yinzi;
    if(sum==shu)
        cout<<"数字"<<shu<<"是完数"<<endl;
    else
        cout<<"数字"<<shu<<"不是完数"<<endl;
    return 0;
}