// B1032510002_WEEK3_Lab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    char color;
    cout << "Please enter your chosen color (G/B) : ";
    cin >> color;

    if (color == 'G' || color == 'B')
        cout << "\n Choose correct color G or B";
        //cout << "\n Choose Blue";
    
    //else if (color == 'B') 
        //cout << "\n You choose blue color";
    
    //else 
        //cout << "\n you choose other color";
    

    /*if (color != 'G') {
        cout << "\nYou have not chosen green color";
    }*/
    return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
