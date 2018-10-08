#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    long long c,h,o;
    long long x,y,z;
    cin >> c >> h >> o;
    
    y = ((o/2)-(h/4));
    x = (y-c+(h/2));
    z = (c-y)/6;
    
    if(x<0 || y<0 || z<0)
    {
        cout << "Error";
    }
    else if(y+6*z!=c || 2*x+12*z!=h || x+2*y+6*z!=o)
    {
            cout << "Error";
    }
    else
    {
        cout << x <<" "<< y << " " << z;
    }
    
    return 0;
}
