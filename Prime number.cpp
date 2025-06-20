Input 

#include <iostream>
using namespace std;

int main()
{
    int n, i, c=0;

    cout << "Enter a number ";
    cin>>n;

    for(i=1; i<=n; i++)
    {
        if (n % i == 0)
        {
           c++;
        }
    }
    if (c == 2)
    {
       cout <<n<< " is a Prime number" << endl;
    }
    else
    {
         cout <<n<< "n is not a Prime number" << endl; 
    }
    return 0;    
}

Output 

Enter a number 23
23 is a Prime number


...Program finished with exit code 0
Press ENTER to exit console.
