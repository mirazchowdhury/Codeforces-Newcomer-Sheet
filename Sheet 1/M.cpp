#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    if(ch>=48 && ch<=57)
    {
        cout<<"IS DIGIT"<<endl;
        
    }
    else
    {
        if(ch>=65 && ch<=90)
        {
            cout<<"ALPHA"<<endl<<"IS CAPITAL"<<endl;
        }
        else
        {
            if(ch>=97 && ch<=122)
            {
                cout<<"ALPHA"<<endl<<"IS SMALL"<<endl;
            }
        }
    }
}
