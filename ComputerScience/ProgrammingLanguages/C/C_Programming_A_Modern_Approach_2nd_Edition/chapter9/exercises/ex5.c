int num_digits(int n) 
{
    int count = 1;
    
    while ((n /= 10))
        count++;

    return count;
}
