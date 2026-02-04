// Solution of Hackerrank problem 
// Sansa and XOR
// Solution in CPP 

// Approach - 1 

int sansaXor(vector<int> arr) {
    
    if(int(arr.size())%2==0) return 0 ;
    
    int ans = 0;
    for(int i = 0 ; i<int(arr.size());i+=2)
    {
        ans = ans ^ arr[i];
    }
    return ans ;
}
