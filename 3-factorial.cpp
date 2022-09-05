#include<iostream>
using namespace std;
class Factorial
{
    private:
        int f,i,n=1;
    public:
        void input()
        {
            cout<<"Enter a number:";
            cin>>f;
        }
        int fact();
};
int Factorial::fact()
{
    for(i=2;i<=f;i++)
        n=n*i;
    return n;
}
int main()
{
    Factorial a;
    a.input();
    cout<<"Factorial is "<<a.fact();
    return 0;
}