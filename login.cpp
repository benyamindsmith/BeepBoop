#include <iostream>
#include <string>

using namespace std;

int
main ()
{
  char yesno;
  cout <<
    "Welcome to Ben's login simulator.\nTo enter, you need to create an account.\nCreate account? [Y/N]\n";
  cin >> yesno;

  while ((yesno != 'Y')  && (yesno != 'N'))
    {
      cout << "Invalid response.\n Create account? [Y/N]\n";
      cin >> yesno;
    }

  if (yesno == 'Y')
    {
      string username;
      string password;
      string login;
      string pin;
      // Create account
      cout << "Please create your username:\n";
      cin >> username;
      cin.clear ();
      cin.ignore ();
      cout << "Please create your password:\n";
      std::getline(std::cin,password);
      cin.clear ();
  

      //login
      cout << "To login, please enter your username: \n";
      std::getline(std::cin,login);
      if (login != username)
	{
	  cout << "Invalid username; Please enter a valid username\n";
	  cin >> login;
	}
      cout << "Please enter your password\n";
      cin >> pin;

      if (pin == password)
	{

	  cout << "Access Granted!";
	}
      else if (pin != password)
	{
	  cout << "Incorrect password! Please enter password.\n";
	  cin >> pin;
	}

    }
  else if (yesno == 'N')
    {
      cout << "Goodbye for now!";

    }
}
