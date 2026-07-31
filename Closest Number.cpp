// Solution of Hackerrank Problem
// Closest Number
// Solution in CPP 

int closestNumber(int a, int b, int x) {
    
    long long number = pow(a,b);
    
    int times = number / x ;
    
    int firstdiff = abs(number -  times * x) ;
    int secondiff = abs(number - (times + 1) * x );  
    
    int ans = firstdiff < secondiff ? times * x : (times + 1) * x ;
    
    return ans ;
}
