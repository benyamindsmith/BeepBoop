#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
  char yesno;
  char word;
  int nb =rand();
  
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
      if (nb%2 == 1){
          cout << "That word isn't funny. \n";
      }  if(nb%2 ==0){
          cout << "Hey, that's kinda funny! \n";
      }
    }
  else if (yesno == 'N')
    {
      cout << "Come back when you have a funny word! \n";
    }


}
