#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
bool testPass(char []);
int main()
{
    char *password;
	
    int length; 
    int numCharacters;
    cout << "********************************************************************" <<endl;
    cout << "Please enter how many characters you would like your password to be.";
    cout << "\n Your password must be at least 6 characters long." << endl;
    cout << "********************************************************************" <<endl;
    cin >> numCharacters;
    while (numCharacters < 6)
    {
    	cout << "IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII" << endl;
        cout << "Please enter a password length of at least 6 characters." << endl;
        cout << "IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII" << endl;
        cin >> numCharacters;
    }
    password = new char[numCharacters+1];
    cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
    cout << "Please enter a password that contains at least one uppercase letter, ";
    cout << "\n onelowercase letter, and at least one digit." << endl;
    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
    cin >> password;
    length = strlen(password);
    while (length != numCharacters)
    {
    	cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"<<endl;
        cout << "Your password is not in the size of you requested. ";
        cout << "\nPlease re-enter your password." << endl;
        cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"<<endl;
        cin >> password;
        length = strlen(password);
    }
    while (testPass(password) == false)
{
    if (testPass(password)){
    cout << "-----------------------" << endl;
    cout << "Your password is valid." << endl;
    cout << "-----------------------" << endl;
    }else
    {
    	cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;
        cout << "Your password is not valid. ";
        cout << "\nPlease refer to the above warning message." << endl;
        cout << "\nPlease re-enter your password." << endl;
        cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;
        cin >> password;
    }
}
if (testPass(password)){
    cout << "-----------------------" << endl;
    cout << "Your password is valid." << endl;
    cout << "-----------------------" << endl;
    }else
    {
    	cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;
        cout << "Your password is not valid. ";
        cout << "Please refer to the above warning message." << endl;
        cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;
    }
    delete[] password ;
    return 0;

}
bool testPass(char pass[])
{
    bool aUpper = false,
         aLower = false,
         aDigit = false ;
    for ( int i = 0 ; pass[i] ; ++i )
        if ( isupper(pass[i]) )
            aUpper = true ;
        else if ( islower(pass[i]) )
            aLower = true ;
        else if ( isdigit(pass[i]) )
            aDigit = true ;
    if ( aUpper && aLower && aDigit )
        return true;
    else
        return false ;
}
