//Taking unknown number of inputs in a vector
#include <iostream> 
using namespace std; 
int main() 
{ 
    int input;  
    int count = 0;  
    cout << "To stop enter any character"; 
    cout << "\nEnter Your Input::"; 
  
    // cin returns false when a character 
    // is entered 
    while (cin >> input)
    {  
        count++;
    } 
    cout << "\nTotal number of inputs entered: " << count; 
    return 0; 
}  