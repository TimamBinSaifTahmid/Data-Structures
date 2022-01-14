#include<bits/stdc++.h>
using namespace std;
int main()
{
    // declaration without initialization
    int arr[10];
    // declaration with initialization
    int arr1[10]= {1,2,3,4,5,6,7,8,9,10};

    //array initialization
    printf("Enter an array of size 10:\n");
    for(int i=0; i<10; i++)
    {
        scanf(" %d",&arr[i]);
    }

    //update element of the array
    //add 2 with every element of the array
    for(int i=0; i<10; i++)
    {
        arr[i]=arr[i]+2;
    }

    //delete element from array
    //deleting inserted element from the array
    int deletedArray[9];
    int element;
    bool b=false;
    printf("Enter the element to delete:\n");
    scanf("%d",&element);
    for(int i=0; i<9; i++)
    {
        if(arr[i]==element)
            b=true;
        if(b)
            deletedArray[i]=arr[i+1];
        else
            deletedArray[i]=arr[i];
    }

    sort(deletedArray,deletedArray+9);

    //printing element of the array
    for(int i=0; i<9; i++)
    {
        printf("%d ",deletedArray[i]);
    }
}
