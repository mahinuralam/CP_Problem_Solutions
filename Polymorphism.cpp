#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
//#define endl '\n'
using namespace std;

// Compile time polymorphism
// Function overloading
class calculate
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    int add(double a, double b)
    {
        return a + b;
    }
};

// Operator overloading
class opOverload
{
public:
    int x, y;
    opOverload(int a = 0, int b = 0)
    {
        x = a;
        y = b;
    }
    opOverload operator+(opOverload const &obj)
    {
        opOverload here;
        here.x = x + obj.x;
        here.y = y + obj.y;
        return here;
    }

    void print()
    {
        cout << x << " " << y << endl;
    }
};

// Runtime polymorphism
// Virtual function
class me
{
public:
    virtual void name()
    {
        cout << "Mahinur" << endl;
    }

    void id()
    {
        cout << " me " << endl;
    }
};

class my : public me
{
public:
    void name()
    {
        cout << "Ononno" << endl;
    }

    void id()
    {
        cout << " my " << endl;
    }
};

int main()
{
    // calculate obj;

    // cout << obj.add(1, 2) << endl;
    // cout << obj.add(2.0, 3.0) << endl;

    // opOverload op1(1, 2), op2(2, 3), op3;
    // op3 = op1 + op2;
    // op3.print();

    me *ptr;
    my myob;
    ptr = &myob;

    ptr->name();
    ptr->name();
    ptr->id();
}
