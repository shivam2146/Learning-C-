#include <bits/stdc++.h>
using namespace std;
void fastscan(int &number)
{
    //variable to indicate sign of input number
    bool negative = false;
    register int c; //directs compiler to use register for storing c
 
    number = 0;
 
    // extract current character from buffer
    c = getchar_unlocked();   //getchar_unlocked faster than getchar but it is thread unsafe
    if (c=='-')
    {
        // number is negative
        negative = true;
 
        // extract the next character from the buffer
        c = getchar_unlocked();
    }
 
    // Keep on extracting characters if they are integers
    // i.e ASCII Value lies from '0'(48) to '9' (57)
    for (; (c>47 && c<58); c=getchar_unlocked())
        number = number *10 + c - 48;           //i suggest u to use bitwise operator to compute this expression
 
    // if scanned input has a negative sign, negate the
    // value of the input number
    if (negative)
        number *= -1;
}
 
// Function Call
int main()
{
    int number;
    fastscan(number);
    cout << number << "\n";
    return 0;
}
