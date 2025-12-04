#include <stdio.h>

int main() 
{
    int n, x;
    
   
    printf("Enter the array size for this experiment please: ");
    scanf("%d", &n);
    
    int arr[n];
    

    printf("Enter %d sorted elmnts : ", n);
    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    

    printf("Enter your number x : ");
    scanf("%d", &x);
    

    int index = -1;  
    
    for(int i = 0; i < n; i++) 
    {
        if(arr[i] >= x) {
            index = i;   
            break;       
        }
    }
    
    
    printf("Index of our ceil -: %d\n", index);
    
    return 0;
}