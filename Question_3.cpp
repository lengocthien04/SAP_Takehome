#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> merge(vector<int> &a, vector<int> &b)
{
 int n = a.size();
 int m = b.size();
 vector<int> res(n + m);
 int i = 0;
 int j = 0;
 while (i < n && j < m)
 {
  if (a[i] < b[j])
  {
   res[i + j] = a[i];
   i++;
  }
  else
  {
   res[i + j] = b[j];
   j++;
  }
 }
 while (i < n)
 {
  res[i + m] = a[i];
  i++;
 }
 while (j < m)
 {
  res[j + m] = b[j];
  j++;
 }
 return res;
}

int main()
{
 vector<int> a = {1, 4, 8};
 vector<int> b = {1, 6, 9};
 vector<int> c = merge(a, b);
 for (int i = 0; i < c.size(); i++)
 {
  cout << c[i] << " ";
 }
 return 0;
}