#include <iostream>
#include <string>

using namespace std;


int main()
{

   int batteryPercent;
   cout << "Enter your battery percentage: ";
   cin >> batteryPercent;

   bool emergencyStop = false;
   cout << "Is the emergency stop button pressed? (1 for yes, 0 for no): ";
   cin >> emergencyStop; 

   bool RobotReady = false;


   if (batteryPercent > 20 && !emergencyStop)
   {
      cout << "Robot Ready." << endl;
      RobotReady = true;
   }
   else if (emergencyStop)
   {
      cout << "Emergency stop is pressed." << endl;
   }
   else
   {
      cout << "Battery level is low." << endl;
   }


   int RobotMode;
   cout << "Enter the robot mode: " << endl; ;
   cout << "1.Manual" << endl;
   cout << "2.Automatic" << endl;
   cout<< "3.Calibration" << endl;
   cout << "Choice: ";
   cin >> RobotMode;

   int action;
   cout << "Enter the action to perform: " << endl;
    cout << "1.Pick Object" << endl;
    cout << "2.Place Object" << endl;
    cout << "3.Wave" << endl;
    cout << "4.Return to Home" << endl;
    cout << "Choice: ";
    cin >> action;

    switch(RobotMode)
    {
        case 1:
            cout << "Manual mode selected." << endl;
            break;
        case 2:
            cout << "Automatic mode selected." << endl;
            break;
        case 3:
            cout << "Calibration mode selected." << endl;
            break;
        default:
            cout << "Invalid robot mode." << endl;
            break;
    }


    if (RobotReady)
    {
        switch(action)
    {
        case 1:
            cout << "Picking up the object." << endl;
            break;
        case 2:
            cout << "Placing the object." << endl;
            break;
        case 3:
            cout << "Waving." << endl;
            break;
        case 4:
            cout << "Returning to home position." << endl;
            break;
        default:
            cout << "Invalid action." << endl;
            break;
    }

    }
    else
    {
        cout << "Robot is not ready. Action Cancelled.";
    }
    


}