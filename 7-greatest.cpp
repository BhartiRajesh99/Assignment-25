#include<iostream>
using namespace std;
class Greatest
{
    private:
        int a,b,c;
    public:
        void input()
        {
            cout<<"Enter three numbers:";
            cin>>a>>b>>c;
        }
        int greater()
        {
            if(a>b)
                if(a>c)
                    return a;
                else
                    return c;
            else
                if(b>c)
                    return b;
                else
                    return c;
        }
};
int main()
{
    Greatest k;
    k.input();
    cout<<"Greater number is "<<k.greater();
    return 0;
}