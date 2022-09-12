#include<bits/stdc++.h>
using namespace std;
int searchList(const int list[], int numElems, int value){
    int index = 0;      // Used as a subscript to search array
    int position = -1;  // To record of search value
    bool found  = false;// flag to indicate the value not found
    while(index < numElems && !found){
        if(list[index] == value){   // If the value is found
            found = true;           // Set the flag
            position = index;       // Record the value's subscript
        }
        index++;                    // Go to the next element
    }
    return position;                // Return the position, or -1
}
const int SIZE = 5;
int main(){
    int tests[SIZE] = {87, 75, 98, 100, 82};
    int results;
    // Search the array for 100
    results = searchList(tests, SIZE, 100);
    // If the searchList returned -1, then 100 was not found
    if(results == -1)
        cout << "You did not earn 100 points on any test\n";
    else {
        // Otherwise results contains the subscript of
        // the first 100 found in the array
        cout << "You earned 100 points on test ";
        cout << (results + 1) << endl;
    }
    return 0;
}
