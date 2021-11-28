#include <iostream>
using namespace std;
int main()
{
  int c = 0, count = 0;
  string s;

  cout<<"Input a string"<<endl;
  getline(cin , s);
  int n=s.length();

  while (s[c] != '\0') {
    if (s[c] == 'a' || s[c] == 'A' || s[c] == 'e' || s[c] == 'E' || s[c] == 'i' || s[c] == 'I' || s[c] =='o' || s[c]=='O' || s[c] == 'u' || s[c] == 'U'|| s[c]==' ')
      count++;
    c++;
  }

  cout<<"Number of consonents in the string are "<<n-count;

  return 0;
}