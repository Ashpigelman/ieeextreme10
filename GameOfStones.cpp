#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int T;
    cin >> T;
    for(int i=0 ; i<T ; i++)
    {
        int game;
        bool flag=false;
        cin >> game;
        for(int j=0; j<game ; j++)
        {
            int pile;
            cin >> pile;
            for(int k=0; k<pile ; k++)
            {
                int n;
                cin >> n;
                flag ^= (n >> 1) & 1; // one bit binary addition
            }
        }
        if(flag)
            cout << "Alice"<< endl;
        else
            cout << "Bob" << endl;
        
    }
    return 0;
}
