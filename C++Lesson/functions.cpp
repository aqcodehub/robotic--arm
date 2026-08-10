#include <iostream>
using namespace std;

// Function prototype
bool isRobotReady(int battery, bool emergencyStop);

int main()
{
    int battery;
    bool emergencyStop;

    // Get battery percentage
    cout << "Enter battery percentage: ";
    cin >> battery;

    // Get emergency stop status
    cout << "Is emergency stop pressed? (1 = yes, 0 = no): ";
    cin >> emergencyStop;

    // Check if robot is ready
    if (isRobotReady(battery, emergencyStop))
    {
        cout << "Robot Ready!" << endl;
    }
    else
    {
        cout << "Robot Not Ready!" << endl;
    }

    return 0;
}

bool isRobotReady(int battery, bool emergencyStop)
{
    if (battery > 20 && !emergencyStop)
    {
        return true;
    }
    else
    {
        return false;
    }
}

