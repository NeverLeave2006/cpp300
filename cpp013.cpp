#include <iostream>
using namespace std;

int main()
{
    float fruit_weight;
    int fruit_weight_cal;
    cout<<"��������ˮ��������:"<<endl;
    cin>>fruit_weight;
    if(fruit_weight-(int)fruit_weight<0.5)
        fruit_weight_cal=(int)fruit_weight;
    else
        fruit_weight_cal=(int)fruit_weight+1;
    cout<<"һ����"<<fruit_weight_cal<<"��ˮ����Ҫ����Ǯ"<<endl;

    return 0;
}