Input 

#include<iostream>
using namespace std;

void swap(int &ix,int &iy);

void swap(int &a,int &b)
{
    int t;
    t=a;
    a=b;
    b=t;
}

void swap(float &fx,float &fy);

void swap(float &a, float &b)
{
    float t;
    t=a;
    a=b;
    b=t;
}

void swap(char &cx,char &cy);

void swap(char &a, char &b)
{
    char t;
    t=a;
    a=b;
    b=t;
}


int main()
{
    int ix,iy;
    float fx,fy;
    char cx,cy;
    
    cout<<"Enter 2 integers:";
    cin>>ix>>iy;
    swap(ix,iy);
    cout<<"\nix="<<ix<<"\niy="<<iy;
    
    
    cout<<"\nEnter 2 floating point no:";
    cin>>fx>>fy;
    swap(fx,fy);
    cout<<"\nfx="<<fx<<"\nfy="<<fy;
    
    
    cout<<"\nEnter 2 characters:";
    cin>>cx>>cy;
    swap(cx,cy);
    cout<<"\ncx="<<cx<<"\ncy="<<cy;
    
    
    return 0;
}

Output 

Enter 2 integers:25 78

ix=78
iy=25
Enter 2 floating point no:90.2 45.7

fx=45.7
fy=90.2
Enter 2 characters:hey hello

cx=e
cy=h

...Program finished with exit code 0
Press ENTER to exit console.
