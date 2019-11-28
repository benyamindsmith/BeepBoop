int main()
{
    char yesno;
    char username;
    char confirmusername;
    char password;
    
    cout<<"Welcome to Ben's login simulator.\nTo enter, you need to create an account.\n Create account? [Y/N]\n";
    cin >> yesno;
    
    while ((yesno != 'Y') && (yesno != 'N')){
        
        cout << "Invalid response.\n Create account? [Y/N]\n";
        cin >>yesno;
    }
    
    if (yesno=='Y'){
        
        cout << "Please create your username:\n";
        cin >> username;
        
        cout << "Please confirm your username:\n";
        
        cin >> confirmusername;
        
        if (username != confirmusername){
            cout << "ERROR: username and confirmation do not match. Try again";
            }
            cout<< "please create password";
        
        } else if(yesno=='N'){
        cout << "Goodbye for now!";
        
    } 
}
