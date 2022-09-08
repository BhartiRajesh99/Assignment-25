#include<iostream>
using namespace std;
class Factorial
{
    private:
        int f,fact;
    public:
        void input()
        {
            cout<<"Enter a number:";
            cin>>f;
        }
        int getnumber()
        {
            return f;
        }
        void factorial();
        int getfactorial()
        {
            return fact; 
        }
};
void Factorial::factorial()
{
    int n=1;
    for(int i=2;i<=f;i++)
        n=n*i;
    fact=n;
}
int main()
{
    Factorial a;
    a.input();
    a.factorial();
    cout<<"Factorial of "<<a.getnumber()<<" is "<<a.getfactorial();
    return 0;
}