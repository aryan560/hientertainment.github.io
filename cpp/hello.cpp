#include<bits/stdc++.h>
using namespace std;
namespace raj{
    int val=50;
    int getval()
    {
        return val*10;
    }

}
int main()
{
    float val=10.0;
    cout<<val<<endl;//prints 10.0
    cout<<raj::getval()<<endl;//prints 50
}