Without ternary operator
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
    cout<<"Enter 3rd number ";
    cin>>c;
    
    if(a>b && a>c)
    {
        cout<<a<<" is the greatest of three numbers.";
    }
    
    else if(b>c && b>a)
    {
        cout<<b<<" is the greatest of three numbers.";
    }
    
    else{
        cout<<c<<" is the greatest of three numbers.";
    }
    return 0;
}

Output 

Enter 1st number 5
Enter 2nd number 90
Enter 3rd number 36
90 is the greatest of three numbers.

...Program finished with exit code 0
Press ENTER to exit console.

With ternary operator 

Input 

#include <iostream>

using namespace std;

int main()
{
    int a, b, c, max;
    
    cout<<"Enter 1st number ";
    cin>>a;
    cout<<"Enter 2nd number ";
    cin>>b;
    cout<<"Enter 3rd number ";
    cin>>c;
    
    max=(a>b)?(a>c?a:c):(b>c?b:c);
    
    cout<<max<<" is the greatest of three numbers.";

    return 0;
}

Output 

Enter 1st number 40
Enter 2nd number 34
Enter 3rd number 52
52 is the greatest of three numbers.

...Program finished with exit code 0
Press ENTER to exit console.

