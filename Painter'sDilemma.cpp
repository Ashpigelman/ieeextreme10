#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

const int max_change = 100000;

int paintNum(vector<int> colors) 
{
    int count[501][21][21];
    for(int c=0; c<21; c++) 
    {
        for(int i=0; i<21; i++) 
        {
            count[0][c][i] = max_change;
        }
    }
    count[0][20][20] = 0;

    for(int j=1; j<=colors.size(); j++)
    {
        for(int c=0; c<21; c++)
        {
            for(int i=0; i<21; i++) 
            {
                int minChange = max_change;
                if(c == colors[j-1] || i == colors[j-1])
                {
                    for(int k=0; k<21; k++)
                    {
                        minChange = min(minChange, count[j-1][c][k] + 1);
                    }
                    for(int k=0; k<21; k++)
                    {
                        minChange = min(minChange, count[j-1][k][i] + 1);
                    }
                    count[j][c][i] = min(minChange, count[j-1][c][i]);
                }
                else 
                {
                    count[j][c][i] = max_change;
                }
            }
        }
    }
    
    int minChange = max_change;
    for(int c=0; c<21; c++) 
    {
        minChange = min(minChange, count[colors.size()][c][colors.back()]);
        minChange = min(minChange, count[colors.size()][colors.back()][c]);
    }
    return minChange;
    
 
}
 
int main() 
{
    int t; 
    cin >> t;
    
    while (t--) 
    {
        int n;
        cin >> n;
        vector<int> colors;
        int color;
        for(int c=0; c<n; c++)
        {
            cin >> color;
            colors.push_back(color-1);
        }
        
        cout << paintNum(colors) << endl;
    }
    return 0;
}
