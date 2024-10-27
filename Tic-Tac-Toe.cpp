#include <iostream>
#include <vector>
#include <string> // Correction ici
#include <cstdlib>
using namespace std;
class X_O{
private:
    char T[3][3] = {
    {' ' , ' ' , ' '},
    {' ' , ' ' , ' '} ,
    {' ' , ' ' , ' '}
    };

public :
    void Show(){
        string a  = "    " ; // ce sont 4 espaces
        string  d = "   "; // cs 3
        char b = 'X';
        string  deca = "                                                   " ;

        cout<<deca<<a<<'#'<<a<<'#'<<endl;
        cout<<deca<<T[0][0]<<d<<'#'<<" "<<T[0][1]<<"  "<<'#'<<" "<<T[0][2]<<endl;
        cout<<deca<<"## ## ## ## ##"<<endl;

        cout<<deca<<a<<'#'<<a<<'#'<<endl;
        cout<<deca<<T[1][0]<<d<<'#'<<" "<<T[1][1]<<"  "<<'#'<<" "<<T[1][2]<<endl;
        cout<<deca<<"## ## ## ## ##"<<endl;

        cout<<deca<<a<<'#'<<a<<'#'<<endl;
        cout<<deca<<T[2][0]<<d<<'#'<<" "<<T[2][1]<<"  "<<'#'<<" "<<T[2][2]<<endl;
    }

    void input(int l , int c){
       if ((l > -1 && l < 2) && (c > -1 && c < 2)){

        T[l][c] = 'X' ;


       }
    }






};

int main() {

   int c = 1;
   int l = 1 ;
   X_O tab  ;

   system("cls") ;
   tab.input(l,c);
   tab.Show() ;



    return 0;
}
