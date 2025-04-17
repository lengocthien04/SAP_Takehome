#include <iostream>
#include <string>
using namespace std;

char solve(string &s)
{
 char a[255] = {};
 int n = 255;
 for (int i = 0; i < n; i++)
 {
  a[i] = 0;
 }
 for (int i = 0; i < s.size(); i++)
 {
  a[s[i]]++;
 }
 for (int i = 0; i < s.size(); i++)
 {
  if (a[s[i]] == 1)
  {
   return s[i];
  }
 }
 return 0;
}

int main()
{

 string s = "aabc";
 char t = solve(s);
 if (t != 0)
 {
  cout << t;
 }
 else
 {
  cout << "null";
 }
 return 0;
}