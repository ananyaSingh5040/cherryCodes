// Online C++ compiler to run C++ program online
// Check if palindrome: 
#include <iostream>
using namespace std;
bool checkIfPalindrome(int i, string &s)
{
    if (i >= s.size() / 2)
        return true;
    if (s[i] != s[s.size() - i - 1])
        return false;

    return checkIfPalindrome(i + 1, s);
}

int main()
{
    string s = "madam";
    cout << checkIfPalindrome(0, s);
    return 0;
}