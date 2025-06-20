swap two numbers using three variables.
Input 

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    
    cout<<"Enter 1st number ";
    cin>>a;
    cout<<"Enter 2nd number ";
    cin>>b;

    c=a;
    a=b;
    b=c;

    cout<<"a="<<a<<",b="<<b<<endl;

    return 0;
}

Output 

Enter 1st number 23
Enter 2nd number 34
a=34,b=23


...Program finished with exit code 0
Press ENTER to exit console.


swap two numbers without using three variables.

Input 

#include <iostream>
using namespace std;

int main()
{
    
    int a, b;
    
    cout<<"Enter 1st number ";
    cin>>a;
    cout<<"Enter 2nd number ";
    cin>>b;

    a = a+b;
    b = a-b;
    a = a-b;

    cout<<"a="<<a<<"\nb="<<b<<endl;

    return 0;
}

Output 

Enter 1st number 90
Enter 2nd number 34 
a=34
b=90


...Program finished with exit code 0
Press ENTER to exit console.
