#include<bits/stdc++.h>
using namespace std;
showQueue(queue<int>myQueue)
{
   int size= myQueue.size();
    for(int i=0;i<size;i++){
        cout<<myQueue.front();
        myQueue.pop();
    }

}
int main()
{
    //declaring queue    queue<int> myQueue;

    //initializing queue
     printf("Enter the size of queue:");
    int n,temp;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>temp;
        myQueue.push(temp);
    }

    cout << "The queue is : ";
    showQueue(myQueue);

    cout << "\nQueue.size() : " << myQueue.size();
    cout << "\nQueue.front() : " << myQueue.front();
    cout << "\nQueue.back() : " << myQueue.back();

    cout << "\nQueue.pop() : ";
    myQueue.pop();
    showQueue(myQueue);

    return 0;
}
