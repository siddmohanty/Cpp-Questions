//Given a set of elements, design an Algorithm and write the subsequent C program to determine the n-th smallest number in that set.

#include<iostream> 
#include <vector> 
#include<algorithm> // for heap operations 
using namespace std; 
int main() 
{ 

    vector<int> v1; //Initialize a Vector
    int input,n; 
    int count=0; //keeps a track of the length of the vector
    cout<<"Enter n:"<<endl; 
    cin>>n; //Reads 'n'
    cout<<"\n"<<"Enter the elements:"<<endl;
    while (cin >> input){   //input is stored in the variable 'input'
        v1.push_back(input); //input element is entered into the vector
        count++; //Count increments for each input
    }
      

    make_heap(v1.begin(),v1.end()); //v1 is converted into a MAXHEAP

    for(int i=count;i>n;i--)
    { 
    //The following two lines are the snippet of popping the largest element off of a MAXHEAP
    pop_heap(v1.begin(),v1.end()); //Pops the largest element in the heap i.e. the element at the top 
    v1.pop_back();  //Deletes maximum element
    } 


    cout<<v1.front()<<endl; //Returns the 'n'th smallest number
      
    return 0; 
} 