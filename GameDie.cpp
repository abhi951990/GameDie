#include <iostream>
#include <cstdlib>

#include "GameDie.h"
#include <time.h>


using namespace std;


//class constructor that seeds the random number generator
GameDie::GameDie()
{

cout<<roll()<<endl;


}

//generate a random number between 1-6 (inclusive) and display it
int GameDie::roll()
{
 srand (time(NULL));

int a= rand()%20+1;
// cout<<a<<endl;

if(a>4)
return rand()%a+1;
else
return rand()%6+1;

}
