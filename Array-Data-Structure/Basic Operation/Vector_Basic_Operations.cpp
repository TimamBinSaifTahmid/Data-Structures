#include<bits/stdc++.h>
using namespace std;
int main()
{
    //declaration of vector without initialization
    vector<int> myVector;
    //declaration of vector with initialization
    vector<int> myVector2= {6,5,4,3,2,1};

    //initializing vector
    int n,temp;
    cout<<"Enter the size of array: ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
       cin>>temp;
        myVector.push_back(temp);

    }

    //update element of vector without iterator
    for(int i=0; i<myVector.size(); i++)
        myVector[i]=myVector[i]+5;

    //updating element of vector with iterator
    for(auto i=myVector2.begin(); i!=myVector2.end(); i++)
        *i=*i+3;

    //delete last element
    myVector2.pop_back();

    //delete all element
    myVector.clear();

    //swap one vector with other
    myVector.swap(myVector2);

    //sorting vector
    sort(myVector.begin(), myVector.end());

    //printing all element of vector
    for(int i=0; i<myVector.size(); i++)
        cout<<myVector[i]<<" a";


    cout<<endl;
    for(auto i=myVector2.begin(); i!=myVector2.end(); i++)
       cout<< *i <<" b";



}
