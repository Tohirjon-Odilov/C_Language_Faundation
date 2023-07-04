#include <stdio.h>

int bubble_sort(int arr[],int len)
{
    int  stakan;
    for(int i = 0; i < (len-1); i++)
    {
        for(int j = i+1; j < len; j++)
        {
            if(arr[i] > arr[j])
            {
                stakan = arr[i];
                arr[i] = arr[j];
                arr[j] = stakan;
            }
        }
    }
    return arr[];
}

int main()
{
    int arr[10] = {0,9,8,3,5,7,6,4,2,1};
    int len = sizeof(arr) / sizeof(int);
    int new = bubble_sort(arr,len);

    bubble_sort(arr,len);
    for (int i=0;i<len;i++)
    {
         printf("%d\n",new[i]);
    }
    int len1 = sizeof(new) / sizeof(int);
	printf(len1);

    return 0;
}
