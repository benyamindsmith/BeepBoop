#include <iostream>
#include <string>

using namespace std;

int main()
{
    char yesno;
    
    
    cout<<"Welcome to Ben's login simulator.\nTo enter, you need to create an account.\n Create account? [Y/N]\n";
    cin >> yesno;
    
    while ((yesno != 'Y') && (yesno != 'N')){
        
        cout << "Invalid response.\n Create account? [Y/N]\n";
        cin >>yesno;
    }
    
    if (yesno=='Y'){
        char username;
        char password;
        char login;
        char pin;
    // Create account
        cout << "Please create your username:\n";
        cin >> username;
        cin.clear(); cin.ignore();
        cout <<"Please create your password:\n";
        cin >> password;
       
    // login
    
           cout << "To login, please enter your username: \n";
           cin >> login;
    if(login!=username){
        cout<<"Invalid username; Please enter a valid username";
        cin >>login;
    }
    cout << "Please enter your password";
    cin >> pin;
    } else if(yesno=='N'){
        cout << "Goodbye for now!";
        
    } 
}
