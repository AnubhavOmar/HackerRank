// Solution of Hackerrank Problem
// Simple Text Editor
// Solution in CPP 

// Approach - 1  (Using Stack)

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
    
    int n; 
    cin >> n;
    
    stack<string> st;   
    string opp = "";    
    
    for(int i = 0; i < n; i++)
    {
        int type;
        cin >> type;
        
        if(type == 1)
        {
            string w;
            cin >> w;
            st.push(opp);     
            opp += w;         
        }
        else if(type == 2)
        {
            int k;
            cin >> k;
            st.push(opp);     
            opp.erase(opp.size() - k);  
        }
        else if(type == 3)
        {
            int k;
            cin >> k;
            cout << opp[k-1] << endl;   
        }
        else if(type == 4)
        {
            opp = st.top();   
            st.pop();
        }
    }
    
    return 0;
}