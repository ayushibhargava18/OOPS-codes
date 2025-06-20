Input 

#include <iostream>
using namespace std;

void palindrome(int arr[], int n)
{

	int f = 0;

	for (int i=0;i<=n/2 && n!=0; i++) 
	{

		if (arr[i]!= arr[n - i - 1]) 
		{
			f = 1;
			break;
		}
	}

	if (f == 1)
		cout << "Not Palindrome";
	else
		cout << "Palindrome";
}


int main()
{
  int a;
  int arr[100];

  cout <<"Enter total number of elements ";
  cin >> a;

  for(int i = 0; i < a; ++i) 
  {
    cout << "Enter element " << i + 1 << " : ";
    cin >> arr[i];
  }

	int n = sizeof(arr) / sizeof(arr[0]);

	palindrome(arr, n);
	return 0;
}
