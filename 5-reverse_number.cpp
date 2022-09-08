#include<iostream>
using namespace std;
class ReverseNumber
{
    private:
        int num,reversenum;
    public:
        void setnumber(int x)
        {
           num=x;
        }
        int getnumber()
        {
            return num;
        }
        void reverse();
        int getreverse()
        {
            return reversenum;
        }
};
void ReverseNumber::reverse()
{
    int mod,c=0,temp=num;
    for(int i=1;temp;i++)
    {
        mod=temp%10;
        c=(c+mod)*10;
        temp/=10;
    }
    reversenum=c/10;
}
int main()
{
    ReverseNumber q;
    q.setnumber(567);
    q.reverse();
    cout<<"Reverse of "<<q.getnumber()<<" is "<<q.getreverse();
    return 0;
}
