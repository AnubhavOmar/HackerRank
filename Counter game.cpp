// Solution of Hackerrank problem Counter game
// Solution in cpp 

// Solution 1
long long power_of_2(long long n)
{
    long long ans = 1;

    while(ans * 2 <= n)
    {
        ans *= 2;
    }

    return ans;
}


string counterGame(long n) {

    bool toogle = true; // true = Louise turn

    while(n > 1)
    {
        long long power_of_2_value = power_of_2(n);

        if(power_of_2_value == n)
        {
            n /= 2;
        }
        else
        {
            n = n - power_of_2_value;
        }

        toogle = !toogle;
    }

    if(!toogle)
    {
        return "Louise";
    }
    else
    {
        return "Richard";
    }
}
