#include <iostream>
#include <fstream>
#include <string>

  using namespace std;
  string name;
  string password;
  int freeSlot = 0;

  bool IsLoggedIn()
  {

    string un ,pc;
   
    cout <<"Enter username: "; cin >> un;
    cout <<"Enter passcode: "; cin >> pc;


    if (un == name && pc == password)
    {
          return true;
    }
    else
    {
      return false;
    }


  }
  
  int main()
  {

    int choice;
    myLoop:

      cout << "1. Register\n2: Login\n3: Exit\n3Your choice: "; cin >> choice;
      if (choice == 1)
      {
        string username, passcode;

        cout << "select a username: "; cin >> username;
        cout << "select a passcode: "; cin >> passcode;

        name = username;
        password = passcode;
        ofstream file;
        ifstream read( username + ".txt");
        file << username << endl << password;

        file.close();
        //freeSlot++;
      }

      else if (choice == 2)
      {
        bool status = IsLoggedIn();

        if (!status)
        {
          cout << "Login Failed" << endl;
          system("PAUSE");
          return 0;

        }
        else
        {
            cout << "Logged In" << endl;
            system("PAUSE");
            return 1;
        }
      }
    else if (choice == 3)
      {
        //for (int i = 0; i < freeSlot; i++) 
        {
            cout << "Username = " + name << endl;
            cout << "Password = " + password << endl;

        }
          return 0;
      }

    {
        goto myLoop;
    }
      

  }