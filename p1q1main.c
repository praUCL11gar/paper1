#include<stdio.h>
#include<stdlib.h>



//Tutree-Q1- Find the smallest and second smallest elements in an array.
//Explanation- Write an efficient C program to find smallest and second smallest element in an array

//it was asked to do this q in C

// bruteforce approach would be to sort using quicksort and printing arr[0],arr[1] in that case Timecomplexity:O(nlogn)
// i have used this approach to find first and second smallest in O(n)
//prasanna garole

int main()
{
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    fn(arr,n);
    return 0;
}

void fn(int arr[],int n)
{

    int i,f=INT_MAX,s=INT_MAX; //INT_MAX for max int possible in c


    if (n<2)//basecase
    {
        printf(" Not enough elements in array ");
        return;
    }


    for (i=0;i<n;i++)
    {
        if(arr[i]<f)
        {
            s=f;
            f=arr[i];
        }

        else if(arr[i]!=f && arr[i]<s)
        {
            s=arr[i];
        }

    }


    if (s==INT_MAX)
    {
        printf("Smallest number is %d & no second smallest number exists\n",f);
    }
    else
        printf("Smallest number is %d and second smallest number is %d\n", f, s);

}
