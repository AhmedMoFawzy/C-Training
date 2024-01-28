#include <iostream>
using namespace std;

int main()
{
      int counter;
      cin>>counter;
      for (int i = counter; i >= 1; i--)        
      {
         for (int j = 1; j <= i; j++)
         {
            cout<<"*";
         }
         cout<<endl;
      }
      
  }


/*
for (int i = n; i >= 1; --i) {
		for (int j = 1; j <= i; ++j) {
			cout << "* ";
		}
		cout << endl;
	}
   */

  #include <iostream>
using namespace std;
int main()
{
    int n;
     cin >> n;
    for (int k = 1; k <= n; k++)
    {
       for(int j = 1; j <= n-k; j++)
            cout << ' ';
       for (int i = 1; i <= 2*k-1; i++)
            cout << '*';
       cout << endl;
    }
    return 0;
}
