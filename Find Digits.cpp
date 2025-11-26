// Solution of Hackerrank problem Find Digits 
// Solution in cpp 

// Appraoch - 1 

int findDigits(int n) {
    int num = n;
    int count = 0 ; 
    while (num != 0 )
    {
     int d = num % 10 ; 
     if(  d !=0 &&((n % d) == 0) )
     {
        count++;
     }
     num = num /10 ;        
    }
    return count ;
}