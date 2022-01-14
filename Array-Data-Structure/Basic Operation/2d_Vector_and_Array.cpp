#include<bits/stdc++.h>
using namespace std;
int main()
{
    //declaration without initialization
    vector<vector<int>> myVector;
    int arr[10][10],row,column;

    //initialization
    printf("Enter number of row of the array:");
    scanf("%d",&row);
    printf("Enter number of column of the array:");
    scanf("%d",&column);
    vector<int>temp;
    for(int i=0; i<row; i++)
    {
        temp.clear();
        for(int j=0; j<column; j++)
        {
            printf("\nEnter (%d,%d)th element:",i+1,j+1);
            fflush(stdin);
            cin>>arr[i][j];
            temp.push_back(arr[i][j]);
        }
        myVector.push_back(temp);
    }

    //update element
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            arr[i][j]+=3;
            myVector[i][j]+=3;
        }
    }

    //printing all element
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            cout<<arr[i][j]<<" ";
            cout<<myVector[i][j]<<" ";
        }
    }



}

