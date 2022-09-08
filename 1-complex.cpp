#include<iostream>
using namespace std;
class Complex
{
    private:
        int real,img;
    public:
        void set(int x,int y)
        {
            real=x;
            img=y;
        }
        void print()
        {
            cout<<endl<<real<<"+"<<img<<"i";
        }
};
int main()
{
    Complex a;
    a.set(2,5);
    a.print();
    return 0;
}