Input 

#include<iostream>
#include<math.h>

using namespace std;
int main() 
{

  float a, b, c, s, radius, area;

  int choice;

  cout<<"1. Area of Triangle";
  cout<<"\n2. Area Of Square";
  cout<<"\n3. Area Of Circle ";
  cout<<"\n4. Area Of Rectangle";
  cout<<"\n\nEnter Your Choice :";

  cin>>choice;

  switch (choice)
  
  {
  case 1: {
    cout << "\nEnter Base and Height ";
    cin >> a >> b;
    area = (a*b) / 2 ; 
    cout << "\nArea of Triangle = " << area << endl;
    break;
  }
  
  case 2: 
  {
    cout << "\nEnter the Side ";
    cin >> a;
    area = a * a;
    cout << "\nArea of Square = " << area << endl;
    break;
  }
  
  case 3: 
  
  {
    cout << "\nEnter the Radius ";
    cin >> radius;
    area = 3.14159 * radius * radius;
    cout << "\nArea of Circle = " << area << endl;
    break;
  }
  
  
  case 4:
  {
    cout << "\nEnter the Length and Breadth ";
    cin >> a >> b;
    area = a * b;
    cout << "\nArea Of Rectangle = " << area << endl;
    break;
  }
  
  default:
    cout << "\n Invalid Choice";
    break;
  }
  return 0;
}

Output 

1. Area of Triangle
2. Area Of Square
3. Area Of Circle 
4. Area Of Rectangle

Enter Your Choice :2

Enter the Side 5

Area of Square = 25


...Program finished with exit code 0
Press ENTER to exit console.
