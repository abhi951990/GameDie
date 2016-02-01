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
int a= rand()%6 +1;
// cout<<a<<endl;
return a;
}
