// number gussing game using c++

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
     int user_num = 0;
    srand((unsigned int)time(NULL));

    int number = (rand() % 100) + 1 ; 

     do {
        cout << "ENTER a random  number(1-100)   :  "<<endl;    
        cin >>user_num;

        if ( user_num> number)                     
            cout << "TO LOW!" << endl;

        else if ( user_num< number)                
            cout << "TO HIGH!" << endl;

        else                                     
            cout << "I WON THE GAME" << endl;

      }    while (user_num != number) ;


    return 0;
}   

