/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
   cout << "Counting using for loop:" << endl;
    for (int count = 1; count <= 5; count++) {
        cout << count << " ";
    }
    cout << endl << endl;
    
    
    
    cout << "Counting using while loop:" << endl;
    int count2 = 1;
    while (count2 <= 5)
        { cout << count2 <<" ";
          count2++;
        }
    cout << endl << endl;
    
    
    cout << "Counting using do while loop:" << endl;
    int count3 = 1;
    
    do {
        cout << count3 << " "; count3++;
       }
       
    while (count3 <= 5);
        cout << endl;
        
    return 0;
}