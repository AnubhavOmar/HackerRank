// Solution of Hackerrank Problem 
// Sam and Substrings 
// Solution in CPP 

// Appraoch - 1 

int substrings(string n) {
    
    if(n.size() ==0) return 0 ;
    const long long MOD = 1000000007;

    vector<int>vecc ;
    for(int i = 0 ; i<n.size() ;i++)
    {
        vecc.push_back((n[i]-'0'));
    }
    
    vector<long long >summ_array(vecc.size()) ; 
    summ_array [0] = vecc[0];
    
    for(int i = 1 ;i<vecc.size() ;i++)
    {
        // main formula or dp formula to calculate sum of sub_string digits ending at ith position 
        
        summ_array[i] =( ((summ_array[i-1] % MOD ) * 10 )+ ((vecc[i] % MOD)* (i+1)) % MOD);
        // sabhi ka mod iss wajah se kiya ki koi value bahut badi na ho
    
    }
    
    int sum = 0 ;
    
    for(int i = 0 ; i<summ_array.size();i++)
    {
        sum = (sum + summ_array[i]) % MOD;
        // isspe bhi mod because value on adding  badi naa ho 
    }
    return sum % MOD ;
}

// Appraoch - 2 
// with optimal space  complexity not using the sum array 


int substrings(string n) {
    
    if(n.size() == 0) return 0;
    
    const long long MOD = 1000000007;
    
    long long prev = 0;   // dp[i-1]
    long long total = 0;  // final answer
    
    for(int i = 0; i < n.size(); i++) {
        
        int digit = n[i] - '0';
        
        prev = ( (prev * 10) % MOD 
                + (1LL * digit * (i + 1)) % MOD ) % MOD;
        
        total = (total + prev) % MOD;
    }
    
    return (int)total;
}
