#include<iostream>
using namespace std;
class Circle
{
    private:
        int r;
        float ar;
    public:
        void setradius(int x)
        {
            r=x;
        }
        int getradius()
        {
            return r;
        }
        void area()
        {
            ar=3.14*r*r;
        }
        float getarea()
        {
            return ar;
        }
};
int main()
{
    Circle a;
    a.setradius(9);
    a.area();
    cout<<"area of circle having radius "<<a.getradius()<<" is "<<a.getarea();
    return 0;
}