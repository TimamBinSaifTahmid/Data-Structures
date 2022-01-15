#include<bits/stdc++.h>
using namespace std;
int main()
{
    //declaring stack
    stack<int> myStack;

    //initializing stack
    printf("Enter the size of stack:");
    int n,temp;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>temp;
        myStack.push(temp);
    }


    //updating value of the stack;
    stack<int> myStack2;
    for(int i=0; i<n; i++)
    {
        myStack2.push(myStack.top()+2);
        myStack.pop();
    }
    for(int i=0; i<n; i++)
    {
        myStack.push(myStack2.top());
        myStack2.pop();
    }


    //printing the element of the stack
    while (!myStack.empty())
    {
        cout  << myStack.top()<< ' ';
        myStack.pop();
    }
}
