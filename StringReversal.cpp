//Given a string, write a recursive routine to reverse it. 
//For example, given the string 'and, the reversal of the string is 'dna'.

/* Here, I converted the string into a vector and added the elements in reverse order.
Wasn't necessary to create a vector, I was just having some fun. */

#include<iostream>
#include<vector>
#include<string>
using namespace std;

string rotateString(vector<char> v, string newString)
{
    if(v.size()!=0)
    {
    newString+=v[v.size()-1]; //Adding element into new string
    v.pop_back(); //Removing last element of the vector
    return rotateString(v, newString);
    }
    
    if(v.size()==0)
    return newString;
}

int main()
{
    string s, newString="";
    cin>>s; //Taking string as input
    vector<char> v(s.begin(), s.end()); //converting s into vector v
    cout<<"Reversed String:"<<rotateString(v, newString);
    return 0;
}
