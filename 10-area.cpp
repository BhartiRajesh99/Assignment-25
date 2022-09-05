#include<iostream>
using namespace std;
class Area
{
    private:
        int r,side,length,breadth;
    public:
        void InputRectangle()
        {
            cout<<"Enter length and breadth:";
            cin>>length>>breadth;
        }
        void InputSquare()
        {
            cout<<"Enter the side:";
            cin>>side;
        }
        void InputCircle()
        {
            cout<<"Enter the radius:";
            cin>>r;
        }
        int areaRectangle()
        {
            return length*breadth;
        }
        float areaCircle()
        {
            return 3.14*r*r;
        }
        int areaSquare()
        {
            return side*side;
        }
};
int main()
{
    Area a;
    a.InputRectangle();
    cout<<"area is "<<a.areaRectangle()<<endl;
    a.InputSquare();
    cout<<"area is "<<a.areaSquare()<<endl;
    a.InputCircle();
    cout<<"area is "<<a.areaCircle()<<endl;
    return 0;
}