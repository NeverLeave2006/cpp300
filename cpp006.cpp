#include <iostream>
using namespace std;

int main()
{
    int Pool_volume;
    int count=10;
    while(count!=0){
        cin>>Pool_volume;
        if(Pool_volume<100)
            cout<<"��Ӿ����ˮû��������Լ�����ˮ"<<endl;
        else
            cout<<"��Ӿ����ˮ����������ֹͣ��ˮ���߼�����һ����Ӿ��"<<endl;
        count--;
    }

    return 0;
}