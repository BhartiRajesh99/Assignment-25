#include<iostream>
using namespace std;
class ReverseNumber
{
    private:
        int n,i,mod,c=0;
    public:
        int input()
        {
            cout<<"Enter a number:";
            cin>>n;
            return n;
        }
        int reverse();
};
int ReverseNumber::reverse()
{
    for(i=1;n;i++)
    {
        mod=n%10;
        c=(c+mod)*10;
        n/=10;
    }
    return c/10;
}
int main()
{
    ReverseNumber q;
    int b;
    b=q.input();
    cout<<"Reverse of "<<b<<" is "<<q.reverse();
    return 0;
}
