#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the three numbers\n";
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)

        {
            cout<<a<<"\t"<<"is greatest among three";

        }
        else
        {
            cout<<c<<"\t"<<"is the greatest among three";
        }
    }
    else
    {
        if(b>c)
        {
            cout<<b<<"\t"<<"is the greatest among the three";
        }
        else
        {
            cout<<c<<"\t"<< "is the greatest among three";
        }
    }
    return 0;
}