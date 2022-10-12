#include <stdio.h> 
  
int product(int ar[], int n) 
{ 
    int result = 1; 
    for (int i = 0; i < n; i++) 
        result = result * ar[i]; 
    return result; 
} 
  
// driver code for the above program 
int main() 
{ 
    int ar[] = { 1, 2, 3, 4, 5 }; 
    int n = sizeof(ar) / sizeof(ar[0]); 
    printf("%d", product(ar, n)); 
    return 0; 
} 
