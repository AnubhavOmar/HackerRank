// Solution of Hackerrank problem Utopian Tree
//  Solution in Cpp 

// Approach - 1

int utopianTree(int n) {
    int ans = 1;
    for(int i = 0 ; i<n;i++)
    {
        if(i%2==0)
        {
            ans *=2 ;
        }
        else 
        {
            ans++;
        }
    }
    return ans ;
}
