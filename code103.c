#include <stdio.h>

int main() {
    int n;
    int Totalsum = 0;
    int SumLeft = 0;
    int PivotIndex = -1; 
    
   
    printf("Enter the size of the array for this exp please: ");
    scanf("%d", &n);
    
    int arr[n];
    
    
    printf("Enter any %d elements for this exp pls: ", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    
   
    for (int i = 0; i < n; i++) 
    {
        Totalsum += arr[i];
    }
    

   
    
    for (int i = 0; i < n; i++) 
    {
        int rightSum = Totalsum - SumLeft - arr[i]; 
        
        if (SumLeft == rightSum) 
        {
            PivotIndex = i;
            break; 
        }
        
        SumLeft += arr[i]; 
    }
    
    
    printf("Pivot index for this exp is : %d\n , thanks!", PivotIndex);
    
    return 0;
}