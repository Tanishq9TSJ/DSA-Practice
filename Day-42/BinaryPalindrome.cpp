#include <iostream>
#include <bitset>
using namespace std;

bool isBinaryPalindrome(unsigned int n) {
    unsigned int reversed = 0;
    unsigned int temp = n;
    
    while (temp > 0) {
        reversed = (reversed << 1) | (temp & 1);
        temp >>= 1;
    }
    
    return reversed == n;
}

int main() {
    unsigned int number;
    
    cout << "Enter a number: ";
    cin >> number;
    
    string binaryString = bitset<32>(number).to_string();  // Assuming 32-bit binary representation
    
    if (isBinaryPalindrome(number))
        cout << binaryString << " is a binary palindrome." << endl;
    else
        cout << binaryString << " is not a binary palindrome." << endl;
    
    return 0;
}