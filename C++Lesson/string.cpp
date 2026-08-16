#include <iostream>
#include <string>

using namespace std;

int main()
{
    string command;
    cout << "Robot is ready to receive commands." << endl;
    cout << "1. Wave" << endl;
    cout << "2. Pick Object" << endl;
    cout << "3. Place Object" << endl;
    cout << "4. Return to Home" << endl; 
    cout << "Enter Robot command: ";
    getline(cin, command);
    
    

    if (command == "Wave")
    {
        cout << "Robot is waving." << endl;
        cout << "Command length: " << command.length() << endl;
        cout << "First character: " << command[0] << endl;
        command += "[Completed.]";
        cout << "Updated command: " << command << endl;
    }
    else if (command == "Pick Object")
    {
        cout << "Robot is picking up the object." << endl;
        
    }
    else if (command == "Place Object")
    {
        cout << "Robot is placing the object." << endl;
    }
    else if (command == "Return to Home")
    {
        cout << "Robot is returning to home position." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }

    if (command.find("Object") != string::npos)
    {
        cout << "The command contains the word 'Object'." << endl;
    }
    else
    {
        cout << "The command does not contain the word 'Object'." << endl;
   
    }
    return 0;
}
