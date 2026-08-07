// Solution of Hackerrank Problem
// Bigger is Greater
// Solution in CPP 


// Approach 1: Manual Lexicographical Permutation Algorithm
// Time Complexity: O(N) where N is the length of the string
// Space Complexity: O(1) auxiliary space
// Algorithm:
// 1. Find the largest index `i` such that w[i] < w[i+1]. If no such index exists, the permutation is the last permutation ("no answer").
// 2. Find the largest index `j` greater than `i` such that w[j] > w[i].
// 3. Swap the value of w[i] with that of w[j].
// 4. Reverse the sequence from w[i+1] up to the end of the string.


string biggerIsGreater1(string w) {
    
    int index = -1 ;
    int n = w.size() ;
    
    for(int i = n -2 ; i>= 0 ; i--)
    {
        if(w[i] < w[i+1])
        {
            index = i ;
            break;
        }
    }
    
    if (index == -1)
    {
        reverse(w.begin(), w.end());
        return "no answer";
    }
    for(int i = n - 1 ; i >= 0 ; i--)
    {
        if(w[i] > w[index])
        {
            swap(w[i], w[index]);
            break;
        }
    }
    
    reverse(w.begin() + index + 1, w.end());
    return w ;
}



// Approach 2: Using STL next_permutation
// Time Complexity: O(N)
// Space Complexity: O(1)

string biggerIsGreater(string w) {
    if (next_permutation(w.begin(), w.end()))
        return w;
    return "no answer";
}