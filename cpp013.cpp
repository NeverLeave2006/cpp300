#include <iostream>
using namespace std;

int main()
{
    float fruit_weight;
    int fruit_weight_cal;
    cout<<"输入所称水果的重量:"<<endl;
    cin>>fruit_weight;
    if(fruit_weight-(int)fruit_weight<0.5)
        fruit_weight_cal=(int)fruit_weight;
    else
        fruit_weight_cal=(int)fruit_weight+1;
    cout<<"一共有"<<fruit_weight_cal<<"斤水果需要被付钱"<<endl;

    return 0;
}