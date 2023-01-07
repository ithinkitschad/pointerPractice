#include <iostream>
#include <string>
using namespace std;

int main() {

    int userInput1 = 0, userInput2 = 0, userInput3 = 0;
    int* inputArray = new int[3] {userInput1, userInput2, userInput3};
    int* arrayPointer = &inputArray[0];

    cout << "***********************************************************"
            "\n*  _____   ____ _____ _   _ _______ ______ _____   _____  *"
            "\n* |  __ \\ / __ \\_   _| \\ | |__   __|  ____|  __ \\ / ____| *"
            "\n* | |__) | |  | || | |  \\| |  | |  | |__  | |__) | (___   *"
            "\n* |  ___/| |  | || | | . ` |  | |  |  __| |  _  / \\___ \\  *"
            "\n* | |    | |__| || |_| |\\  |  | |  | |____| | \\ \\ ____) | *"
            "\n* |_|     \\____/_____|_| \\_|  |_|  |______|_|  \\_\\_____/  *"
            "\n*********************************************************** " << endl;

    cout <<"\nEnter the first number.." << endl;
    cin >> userInput1;
    cout <<"Enter the second number.." << endl;
    cin >> userInput2;
    cout <<"Enter the third number.." <<endl;
    cin >> userInput3;

    *inputArray = userInput1;
    *(inputArray + 1) = userInput2;
    *(inputArray + 2) = userInput3;

    cout <<"\nThe numbers you entered are: " << endl;
    cout << userInput1 << ", " << userInput2 << ", " << userInput3 << endl;
    cout <<"\nThe memory location of -|" << userInput1 << "|- is " << (arrayPointer) << endl;
    cout <<"The memory location of -|" << userInput2 << "|- is " << (arrayPointer + 1) << endl;
    cout <<"The memory location of -|" << userInput3 << "|- is " << (arrayPointer + 2) << endl;

    cout << "\nThe three numbers have been added to the array:" << endl;

    for (int i = 0; i < 3 ; i++)
        cout << *(inputArray + i) << endl;

    delete arrayPointer;

    return 0;
}
