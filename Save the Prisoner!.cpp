// Solution of Hackerrank problem Save the Prisoner!
// solution in cpp 

// Optimal Appraoch 
int saveThePrisoner(int n, int m, int s) {
    int ans = (s + m - 1) % n;
    if(ans == 0) return n;
    return ans;
}