#include <iostream>
#include <string>
using namespace std;
#define Code "123456"

int main()
{
    cout<<"����������:";
    string input_code;
    cin>>input_code;

    if(input_code==Code)
        cout<<"������֤�ɹ�!"<<endl;
    else
        cout<<"������֤ʧ��!"<<endl;
    return 0;
}