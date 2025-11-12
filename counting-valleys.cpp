//Solution of Hackerrank problem Counting Valleys
// Solution in cpp

int countingValleys(int steps, string path) {
    int count_valley = 0; 
    int sealevel = 0 ; 
    for(int i = 0 ; i<path.size();i++)
    {
        if(path[i] == 'U')
        {
            sealevel++;
            if(sealevel==0) count_valley++;
        } 
        else if(path[i]=='D') sealevel--;
        
        
    }
    return count_valley;
}

