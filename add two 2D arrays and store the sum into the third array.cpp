Input 

#include <iostream>
using namespace std;

int main()
{
    int row, col, i, j;

    int m1[10][10], m2[10][10], sum[10][10];

    cout << "Enter the number of Rows and Columns of matrix : ";
    cin >> row >> col;

    cout << "Enter the " << row * col << " elements of first matrix : \n";
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            cin >> m1[i][j];
        }
    }

    cout << "\nEnter the " << row * col << " elements of second matrix : \n";
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            cin >> m2[i][j];
        }
    }


    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            sum[i][j] = m1[i][j] + m2[i][j];
        }
    }


    cout << "Sum \n";

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            cout << sum[i][j] << "  ";
        }

        cout << endl;
    }


    return 0;
}

Output 

Enter the number of Rows and Columns of matrix : 2
2
Enter the 4 elements of first matrix : 
3
4
5
6

Enter the 4 elements of second matrix : 
7
8
9 
0
Sum 
10  12  
14  6  


...Program finished with exit code 0
Press ENTER to exit console.
