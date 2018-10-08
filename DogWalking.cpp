#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k ;
        vector<int> dogs;
        for(int i=0 ; i <n ; i++)
        {
            int x;
            cin >> x;
            dogs.push_back(x);
        }
        
        sort(dogs.begin() , dogs.end());
        vector<int> counter;
        for(int i=1; i<n ; i++)
        {
            counter.push_back(dogs[i] - dogs [i-1]);
        }
        sort(counter.begin() , counter.end());
        int count=0;
        for(int i=0 ; i < n-k ; i++)
        {
            count += counter[i];
        }
        cout << count << endl;
    }
    
    return 0;
}
