#include <iostream>
#include <string>

using namespace std;

int calculateTotal(int arr[], int size)
{
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total += arr[i];
    }
    return total;
}

int findHighest(int arr[], int size)
{
    int highest = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > highest)
        {
            highest = arr[i];
        }
    }
    return highest;
}

int findLowest(int arr[], int size)
{
    int lowest = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < lowest)
        {
            lowest = arr[i];
        }
    }
    return lowest;
}

bool isAngleFound(int arr[], int size, int searchAngle)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == searchAngle)
        {
            return true;
        }
    }
    return false;
}


int main()
{
     cout <<"---------- Robot Servo Angle Array Program --------" << endl;
   int servoAngles[5];
   cout << "Enter servo angles 1: " << endl;
   cin >> servoAngles[0];
   cout << "Enter servo angles 2: " << endl;
   cin >> servoAngles[1];
   cout << "Enter servo angles 3: " << endl;
   cin >> servoAngles[2];
   cout << "Enter servo angles 4: " << endl;
   cin >> servoAngles[3];
   cout << "Enter servo angles 5: " << endl;
   cin >> servoAngles[4];
   
   int total = calculateTotal(servoAngles, 5);
   cout << "Total: " << total << endl;
   
   int highest = findHighest(servoAngles, 5);
   cout << "Highest: " << highest << endl;
   
   int lowest = findLowest(servoAngles, 5);
   cout << "Lowest: " << lowest << endl;

   int searchAngle;
   cout << "Enter an angle to search for: ";   
   cin >> searchAngle;
   
   if (isAngleFound(servoAngles, 5, searchAngle))
   {
       cout << "Angle " << searchAngle << " found." << endl;
   }
   else
   {
       cout << "Angle " << searchAngle << " not found." << endl;
   }

}




