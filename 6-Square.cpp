#include<iostream>
using namespace std;
class Square
{
    private:
        int side,ar;
        static int count;
    public:
        void setnum(int x)
        {
            side=x;
        }
        int getnum()
        {
            return side;
        }
        void sq()
        {
            count++;
            ar=side*side;
        }
        int getsq()
        {
            return ar;
        }
        static int con()
        {
            return count;
        }
};
int Square::count=0;
int main()
{
    Square g,h,i;
    g.setnum(3);
    g.sq();
    cout<<"square of "<<g.getnum()<<" is "<<g.getsq()<<endl;
    h.setnum(5);
    h.sq();
    cout<<"square of "<<h.getnum()<<" is "<<h.getsq()<<endl;
    i.setnum(7);
    i.sq();
    cout<<"square of "<<i.getnum()<<" is "<<i.getsq()<<endl;
    cout<<"number of times function called: "<<Square::con();
    return 0;
}