/**
 * Given a set of 'n' elements in an order, identify all the leaders and print them. 
 * An element is said to be a leader if all the elements to its right are smaller than it. 
 * For example, if the elements are 12, 13, 16, 7, 10 then there is only one leader element 16. 
 * If there are no leaders in the given set of elements then print 'No leaders'.
 **/
#include<iostream>
using namespace std;
int main(){
    int n, arr[n], max=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>max)
        max=arr[i];
    }
    if(max!=arr[n-1])
    cout<<max;

    else
    {
        cout<<"No leader";
    }
    

}