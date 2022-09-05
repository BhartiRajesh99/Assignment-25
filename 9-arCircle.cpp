#include<iostream>
using namespace std;
class Circle
{
    private:
        int r;
    public:
        void input()
        {
            cout<<"Enter thr radius:";
            cin>>r;
        }
        float area()
        {
            return 3.14*r*r;
        }
};
int main()
{
    Circle a;
    a.input();
    cout<<"area is "<<a.area();
    return 0;
}