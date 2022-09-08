#include<iostream>
using namespace std;
class Rectangle
{
    private:
        int length,breadth,ar;
    public:
        void set(int x,int y)
        {
            length=x;
            breadth=y;
        }
        int getlength()
        {
            return length;
        }
        int getbreadth()
        {
            return breadth;
        }
        void area()
        {
            ar=length*breadth;
        }
        int getarea()
        {
            return ar;
        }
};
int main()
{
    Rectangle a;
    a.set(3,4);
    a.area();
    cout<<"area is "<<a.getarea();
    return 0;
}