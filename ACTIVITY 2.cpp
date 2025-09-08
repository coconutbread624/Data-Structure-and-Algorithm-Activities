/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main() {
   string full_name, course_section, birthday, motto_motivation;
   
    cout<<"Input Full Name: ";
    getline(cin, full_name);

    cout<<"Input Course, Yr & Section: ";
    getline(cin, course_section);
    
    cout<<"Input Birthday: ";
    getline(cin, birthday);
    
    cout<<"Input Your Motto or Motivation in Life: ";
    getline(cin, motto_motivation);
    
    cout<<"Hi! I'm "<<full_name<<" of "<<course_section<<". Welcome to Data Structures and Algorithm! My birthday is on "<<birthday<<" and my motto/motvation in life is "<<motto_motivation<<endl;
   return 0;
}