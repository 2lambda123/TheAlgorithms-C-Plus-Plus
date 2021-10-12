// Program to check whether a number is an armstrong number or not
#include <iostream>
using std::cin;
using std::cout;

int main() {
    int n, temp, rem, count = 0, sum=0;
    cout << "Enter a number: ";
    cin >> n;
    
    temp = n;
    
    /* First Count the number of digits
       in the given number */
    while(temp != 0)
    {
        rem = temp%10;
        temp /= 10;
        count++;
    }

    /* Calaculation for checking of armstrongs number i.e. 
       in a n digit number sum of the digits raised to a power of n
       is equal to the original number */
    
    temp = n;
    while(temp!=0)
    {
        rem = temp%10;
        sum += pow(rem,count);
        temp/=10;
    }
    

    if (sum == n)
        cout << n << " is an armstrong number";
    else
        cout << n << " is not an armstrong number";
    
    return 0;
}
