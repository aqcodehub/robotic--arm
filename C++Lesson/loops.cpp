#include <iostream>
#include <string>

using namespace std;

int main()
{
    for ( int i = 2 ; i <=20 ; i+=2)
    {
        cout << i << endl;
    }

    int j = 1;

    while (j <=5)

    {
        cout << "Battery Check " << j << endl;
        j++;
    }

    int choice;

do
{
    cout << "===== Robot Menu =====" << endl;
    cout << "1. Move Robot" << endl;
    cout << "2. Check Battery" << endl;
    cout << "3. Exit" << endl;
    cout << "Choice: ";
    cin >> choice;

}
while(choice != 3);



}