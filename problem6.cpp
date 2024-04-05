#include <iostream>
#include <string>
using namespace std;


bool isPalindromeRecursive(const string& str, int i, int j) {
  
  if (i >= j) {
    return true;  
  }

  if (str[i] != str[j]) {
    return false;  }

  
  return isPalindromeRecursive(str, i + 1, j - 1);
}

bool isPalindrome(const string& str) {
  int len = str.length();
  return isPalindromeRecursive(str, 0, len - 1);
}

int main() {
  string str;

  cout << "Enter a string: ";
  getline(cin, str);  

  if (isPalindrome(str)) {
    cout << 1;
  } else {
    cout << 0;
  }

  return 0;
}
