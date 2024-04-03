#include <iostream>
#include <string>
using namespace std;
string SubString(const string& str, int i, int j) {
  
  if (i < 0 || j < 0 || i >= str.length() || j <= i) {
    return " " ; 
  }
  if (i == j) {
    return string(1, str[i]); 
  }
  return str[i] + SubString(str, i + 1, j);
}

int main() {
  string str;
  cin>>str;
  int i,j;
  cin >>i;
  cin>>j;
  
 string subString = SubString(str, i, j);
  
 cout << "Substring: " << subString << endl; 
  
  return 0;
}
