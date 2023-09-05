#include<stdio.h>
#include<stdlib.h>
 
 void sort(int *arr)
 {
    for(int i=0; i<6;i++)
    {
        for(int j=0; j<6;j++)
        {
            if(arr[i]<arr[j])
            {
                int t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
 }

 void print(int  *arr)
 {
    for(int i=0; i<6;i++)
    {
        printf("%d ",arr[i]);
    }
 }


int main()
{
    int arr[]={1,34,324,90,23,42};

    sort(arr);

    for(int i=0; i<6;i++)
    {
        printf("%d ",arr[i]);
    }
    





}