#include <iostream>
using namespace std;

int main()
{
    int shu;
    cout<<"������һ���������Ȼ��:"<<endl;
    cin>>shu;
    //���������ֵ�����������
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
        cout<<"����"<<shu<<"������"<<endl;
    else
        cout<<"����"<<shu<<"��������"<<endl;
    return 0;
}