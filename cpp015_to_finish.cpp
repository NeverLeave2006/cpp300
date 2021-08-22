#include <iostream>
#include <string>
using namespace std;

struct huffTree
{
    int parent;
    int lchild;
    int rchild;
    int weight;
    string flag;
};

struct Lowest_Node
{
    char ch;
    int ch_num;
};
void coding(int length,huffTree tree[],int n,int &a,int &b){
    int i;
    int r,s;
    r=s=length;
    for(int i=0;i<n;i++){
        if((tree[i].weight<r)&&(tree[i].parent==-1)){
            r=tree[i].weight;
            a=i;
        }
        for(i=0;i<n;i++){
            if((tree[i].weight<s)&&(tree[i].parent==-1)){
                s=tree[i].weight;
                b=i;
            }
        }
    }
}
void frequency(string str)
{
    int length=str.length();
    Lowest_Node * node=new Lowest_Node[length];

    int i,j;
    for(i=0;i<length;i++)
        node[i].ch_num=0;

    int char_type_num=0;
    for(i=0;i<length;i++)
    {
        for(j=0;j<char_type_num;j++)
            if(str[i]==node[j].ch||(node[j].ch>='a'&&node[j].ch<='z'&&str[i]+32==node[j].ch))
                break;
        
        if(j<char_type_num)
            node[j].ch_num++;
        else
        {
            if(str[i]>='A'&&str[i]<='Z')
                node[j].ch=str[i]+32;
            else
                node[j].ch=str[i];
            node[j].ch_num++;
            char_type_num++;
        }
    }

    //按照频率从大到小排序
    for(int i=0;i<char_type_num;i++){
        for(int j=0;j<char_type_num;j++){
            if(node[j].ch_num<node[j+1].ch_num)
            {
                int temp;
                char ch_temp;
                temp=node[j].ch_num;
                ch_temp=node[j].ch;
                node[j].ch_num=node[j+1].ch_num;
                node[j].ch=node[j+1].ch;
                node[j+1].ch_num=temp;
                node[j+1].ch=ch_temp;
            }
        }
    }

    for(i=0;i<char_type_num;i++)
        cout<<"字符"<<node[i].ch<<"出现了"<<node[i].ch_num<<"次"<<endl;

    huffTree *huff=new huffTree[2*char_type_num-1];
    

}