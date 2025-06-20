Input 

#include <iostream>
using namespace std;

void reverese(int arr[], int start, int end)
{
	while (start < end)
	{
		int t= arr[start];
		arr[start] = arr[end];
		arr[end] = t;
		start++;
		end--;
	}
}	


void print(int arr[], int size)
{
for (int i = 0; i < size; i++)
cout << arr[i] << " ";

cout << endl;
}

int main()
{
	int arr[] = {11, 22, 33, 44, 55, 66};
	
	int n =sizeof(arr)/sizeof(arr[0]);
	
	print(arr, n);
	
	reverese(arr, 0, n-1);
	
	cout << "Reversed array is" << endl;

	print(arr, n);
	
	return 0;
}




Output 

11 22 33 44 55 66 
Reversed array is
66 55 44 33 22 11 


...Program finished with exit code 0
Press ENTER to exit console.
