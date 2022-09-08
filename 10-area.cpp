#include<iostream>
using namespace std;
class Area
{
    private:
        int r,arsq,arrec,side,length,breadth;
        float arcircle;
    public:
        void setRecside(int x,int y)
        {
            length=x;
            breadth=y;
        }
        int getReclen()
        {
            return length;
        }
        int getRecbreadth()
        {
            return breadth;
        }
        void setSquareside(int x)
        {
            side=x;
        }
        int getSquareside()
        {
            return side;
        }
        void setCirclerad(int d)
        {
            r=d;
        }
        int getradius()
        {
            return r;
        }
        void areaRectangle()
        {
            arrec=length*breadth;
        }
        int getAreaRectangle()
        {
            return arrec;
        }
        void areaCircle()
        {
            arcircle=3.14*r*r;
        }
        float getAreaCircle()
        {
            return arcircle;
        }
        void areaSquare()
        {
            arsq=side*side;
        }
        int getAreaSquare()
        {
            return arsq;
        }
};
int main()
{
    Area a;
    a.setRecside(3,4);
    a.areaRectangle();
    cout<<"area of rectangle having length "<<a.getReclen()<<" and breadth "<<a.getRecbreadth()<<" is "<<a.getAreaRectangle()<<endl;
    a.setSquareside(5);
    a.areaSquare();
    cout<<"area of square having side "<<a.getSquareside()<<" is "<<a.getAreaSquare()<<endl;
    a.setCirclerad(4);
    a.areaCircle();
    cout<<"area of circle having radius "<<a.getradius()<<" is "<<a.getAreaCircle()<<endl;
    return 0;
}