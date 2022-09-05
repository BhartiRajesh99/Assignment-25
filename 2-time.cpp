#include<iostream>
using namespace std;
class Time
{
    private:
        int hrs,min,sec;
    public:
        void set_time(int x,int y,int z)
        {
            hrs=x;min=y;sec=z;
        }
        void print_time()
        {
            cout<<endl<<hrs<<"hr "<<min<<"min "<<sec<<"sec";
        }
};
int main()
{
    Time a,b;
    a.set_time(3,40,33);
    a.print_time();
    b.set_time(4,59,12);
    b.print_time();
    return 0;
}