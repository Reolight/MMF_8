#include <iostream>
#include "MathLibrary.h"

using namespace std;

void print(float result) {
    cout << "„Q„u„x„…„|„Ž„„„p„„: " << result << endl;
    system("pause");
}

int main()
{
    int choice = -1;
    do {
        system("CLS");
        cout << "x: " << getX() << ", y: " << getY() << endl
            << "„B„r„u„t„y„„„u „„…„~„{„„ „}„u„~„:" << endl
            << "1. „R„…„}„}„p" << endl
            << "2. „Q„p„x„~„€„ƒ„„„Ž" << endl
            << "3. „P„‚„€„y„x„r„u„t„u„~„y„u" << endl
            << "4. „X„p„ƒ„„„~„€„u" << endl
            << "5+. „O„q„~„€„r„y„„„Ž" << endl
            << "0. „B„„z„„„y" << endl;
        cin >> choice;

        switch (choice) {
        case 1:
            print(add());
            break;
        case 2:
            print(sub());
            break;
        case 3:
            print(mult());
            break;
        case 4:
            print(divide());
            break;
        }        
    } while (choice != 0);
}