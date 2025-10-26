/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;
class Karakter{
    public:
        string adi;
        int can;
        void kosma(){
            cout<<adi<<"koşuyor"<<endl;
        }
        void vurma(){
            cout<<adi<<"vuruyor"<<endl;
        }
        void goll(){
            cout<<adi<<"gooool"<<endl;
        }
};

int main()
{
    Karakter Karakter1;
    //strcpy(karakter1.adi,"Mini Pekka");
    Karakter1.adi="vinnie";
    Karakter1.can= 4200;
    
    Karakter Karakter2;
    //strcpy(karakter2.adi,"İksir Golemi");
    Karakter2.adi="heimdall";
    Karakter2.can= 8000;
    
    cout<<"Karakter1:"<<Karakter1.adi<<endl;
    cout<<"Karakter2:"<<Karakter2.adi<<endl;
    
    Karakter1.kosma();
    Karakter2.kosma();
    
    Karakter1.vurma();
    Karakter2.vurma();
    
    Karakter2.goll();
    
    
    return 0;
}