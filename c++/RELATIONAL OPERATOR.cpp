#include<iostream>
using namespace std;

class number{
    int x,y;
public:
    number(){ x=0; y=0;}
    number(int a, int b){ x=a; y=b;}
    //void get (int &a,int &b) {a=x; b=y;}
    //void set(int a, int b) {x=a; y=b;}
    void print() {cout<<x<<" "<<y<<endl;}

    number operator + (number obj);
    bool operator > (number obj);
    bool operator < (number ob);
};

number number:: operator + (number ob)
{
    number temp;
    temp.x = x+ob.x;
    temp.y = y+ob.y;
    return temp;
}

bool number::operator>(number ob)
{
    return (x+y)> (ob.x+ob.y);
}

bool number::operator<(number ob)
{
    return (x+y)< (ob.x+ob.y);
}

int main()
{
    number n1(8,6),n2(4,8),n3;

    n3=n1+n2;
    n3.print();
    if(n1>n2) cout<<"n1"<<endl;
    else cout<<"n2"<<endl;

    return 0;
}
