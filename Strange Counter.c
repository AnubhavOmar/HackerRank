// Solution of Hackerrank problem Strange Counter
//  Solution in C language

long strangeCounter(long t) {
    long cycle = 3;   
    while (t > cycle) {
        t -= cycle;
        cycle *= 2;   
    }

    return cycle + 1 - t;
}
