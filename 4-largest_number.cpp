#include<iostream>
using namespace std;
class LargestNumber
{
    private:
        int a,b,c,largest;
    public:
        void input()
        {
            cout<<"Enter three numbers:";
            cin>>a>>b>>c;
        }
        void greater()
        {
            if(a>b)
                if(a>c)
                    largest=a;
                else
                    largest=c;
            else
                if(b>c)
                    largest=b;
                else
                    largest=c;
        }
        int getlargest()
        {
            return largest;
        }
};
int main()
{
    LargestNumber k;
    k.input();
    k.greater();
    cout<<"Greater number is "<<k.getlargest();
    return 0;
}