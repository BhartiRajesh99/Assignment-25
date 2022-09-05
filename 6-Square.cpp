#include<iostream>
using namespace std;
class Square
{
    private:
        int side;
        static int count;
    public:
        void input()
        {
            cout<<"Enter the side:";
            cin>>side;
        }
        int area()
        {
            count++;
            return side*side;
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
    g.input();
    cout<<"square is "<<g.area()<<endl;
    h.input();
    cout<<"square is "<<h.area()<<endl;
    i.input();
    cout<<"square is "<<i.area()<<endl;
    cout<<"number of times function called: "<<Square::con();
    return 0;
}