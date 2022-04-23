#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll r;
    cin>> r;
    ll Po = 1 - r;
    ll cnt=0,x=0,y=r;
    cout<<"k        Pk      (x,y)      2Xk+1     2Yk+1"<<endl;
    cout<<cnt<<"        "<<Po<<"       "<<0<<", "<<y<<"     "<<2*x<<"        "<<2*y<<endl;

    while(x!=y)
    {
        cnt++;
        if(Po<0)
        {
            //cout<<"P0 "<<Po<<<<" "<<2*x<<" +1 "<<endl;

            x++;
            cout<<"                                                                          P"<<cnt<<" = "<<Po<<" + 2 * "<<x<<" + 1"<<endl;
            Po = Po + 2*x + 1; //previous x
            cout<<cnt<<"        "<<Po<<"       "<<x<<", "<<y<<"     "<<2*x<<"        "<<2*y<<endl;
        }
        else
        {

            x++,y--;
            cout<<"                                                                          P"<<cnt<<" = "<<Po<<" + 2 * "<<x<<" + 1"<<" - 2 * "<<y<<endl;
            Po = Po + 2*x + 1 - 2*y; //previous x and y
            cout<<cnt<<"        "<<Po<<"       "<<x<<", "<<y<<"     "<<2*x<<"        "<<2*y<<endl;
        }
    }




    return 0;
}

