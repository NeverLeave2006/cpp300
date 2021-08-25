#include <iostream>
#include <string>
using namespace std;
#define Code "123456"

int main()
{
    cout<<"请输入密码:";
    string input_code;
    cin>>input_code;

    if(input_code==Code)
        cout<<"密码验证成功!"<<endl;
    else
        cout<<"密码验证失败!"<<endl;
    return 0;
}