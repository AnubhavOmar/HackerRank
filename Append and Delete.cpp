//Solution of Hackerrank problem Append and Delete
// Solution in cpp

string appendAndDelete(string s, string t, int k) {
    int left_in_t = 0 ;
    int left_in_s = 0 ;
    for(int i = 0 ; i < int(s.size()) && i < int(t.size()) ; i++)
    {
        if(s[i] != t[i])
        {
            break;
        }
        else
        {
            left_in_s++ ;
            left_in_t++ ;
        }
    }
    
    left_in_s = s.size() - left_in_s ;
    left_in_t = t.size() - left_in_t ;
    
    int operations = left_in_s + left_in_t;

    if (operations <= k && (k - operations) % 2 == 0)
    {
        return "Yes";
    }
    if (k >= int(s.size() + t.size()))
    {
        return "Yes";
    }
    else
    {
        return "No";
    }
    
}