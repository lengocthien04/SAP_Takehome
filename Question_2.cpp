#include <iostream>
#include <string>
using namespace std;

void solve(string &s)
{
 int a[255] = {};
 int n = 255;
 string stack = "";

 for (int i = 0; i < n; i++)
 {
  a[i] = 0;
 }
 for (int i = 0; i < s.size(); i++)
 {
  if (a[s[i]] == 0)
  {
   stack += s[i];
  }
  a[s[i]]++;
 }
 cout << "OutPut: {";
 for (int i = 0; i < stack.size(); i++)
 {
  if (a[stack[i]] > 0)
  {
   cout << stack[i] << "=" << a[stack[i]];
  }
  if (i < stack.size() - 1)
   cout << ", ";
 }
 cout << "}";
}

int main()
{

 string s = "sapstart";
 cout << "Input:" << s << endl;
 solve(s);
 return 0;
}
