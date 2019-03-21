/* Given a set of elements stored in an array and a number 'm', 
design an Algorithm and write the subsequent C program to perform 
cyclic right shift of the array by 'm' places. 
For example, if the elements are 12, 13, 16, 7, 10 and m =2 
then the resultant set will be 7, 10, 12, 13, 16.
 Input format:
 Element 1
 Element 2
 .
 .
 .
 Last Element
 Value of 'm'
 */
/* SYNTAX TO PRINT VECTOR ELEMENTS

    v1.shrink_to_fit(); 
    cout << "\nVector elements are: "; 
    
    for (auto it = v1.begin(); it != v1.end(); it++) 
    cout << *it << " ";
*/

#include<iostream> 
#include <vector> 
#include<algorithm> // for heap operations 
using namespace std; 
int main() 
{ 

    vector<int> v1; //Initialize a Vector
    int input,m; 
    int count=0; //keeps a track of the length of the vector
    
    //Input block
    while (cin >> input)
    {   //input is stored in the variable 'input'
        v1.push_back(input); //input element is entered into the vector
        count++; //Count increments for each input
    }
    
    
    m=v1[count-1]; //'m' is the last element in the vector
    
    v1.erase(v1.begin()+count-1); //removing 'm' from vector
    v1.erase(v1.begin()); //Erasing 'no of elements' i.e. first element from vector
    count-=2; //Reducing count by 2 since first and last elements removed
    
    v1.shrink_to_fit(); 
    cout << "\nVector elements after rotation are: "; 
    //Printing last m elements 
    for (auto it = v1.begin()+count-m; it != v1.end(); it++) 
    cout << *it << " ";
    
    //Printing rest of the elements
    for (auto it = v1.begin(); it != v1.end()-m; it++) 
    cout << *it << " "; 
    
return 0;
}
