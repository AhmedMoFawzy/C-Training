#include <iostream>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    while (n != 0)
    {
      int r;
      r = m % n;
      m = n;
      n = r;
    }
    cout<<m;
}
