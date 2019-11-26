#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main ()
{
  srand(time(NULL));
  char yesno;
  char word;
  double nb =rand()%100;
  
  cout << "Do you have a funny word? [Y/N] \n";

  cin >> yesno;

  while ((yesno != 'Y') && (yesno != 'N'))
    {
      cout <<
	"Sorry, I did not understand your response. Please Enter Y or N \n";
      cin >> yesno;
    }
  if (yesno == 'Y')
    {
      cout << "What is the word?\n";
      cin >> word;
      if (nb >50){
          cout << "That word isn't funny. \n";
      }  else {
          cout << "Hey, that's kinda funny! \n";
      }
    }
  else if (yesno == 'N')
    {
      cout << "Come back when you have a funny word! \n";
    }
    
    cout<<nb;
}
