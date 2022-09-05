#include<iostream>
using namespace std;
class Rectangle
{
    private:
        int length,breadth;
    public:
        void input()
        {
            cout<<"Enter length and breadth:";
            cin>>length>>breadth;
        }
        int area()
        {
            return length*breadth;
        }
};
int main()
{
    Rectangle a;
    a.input();
    cout<<"area is "<<a.area();
    return 0;
}