// Solution of hackerrank 
// Consecutive Subsequences
// Solution in CPP 



// Appraoch - 1  Time Complexity - O(n^2)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> vecc(n);

        for(int i = 0; i < n; i++)
        {
            cin >> vecc[i];
        }

        int count = 0;

        for(int i = 0; i < n; i++)
        {
            int sum = 0;

            for(int j = i; j < n; j++)
            {
                sum += vecc[j];

                if(sum % k == 0)
                {
                    count++;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}
