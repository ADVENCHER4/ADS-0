// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    int divider;
    if (a > b) 
    {
        divider = b;
    }
    else
    {
        divider = a;
    }
    while (a % divider != 0 || b % divider != 0)
    {
        divider--;
    }
    return divider;
}
