#include <stdio.h>  
#include <conio.h>  
int main ()  
{  
    
int arr[20], i, j, k, size,cont=1; 
while(cont==1)
    {
      	
     printf (" Define the number of elements in an array: ");  
     scanf (" %d", &size);  
      
     printf (" \n Enter %d elements of an array: \n ", size);  
    
    
     for ( i = 0; i < size; i++)  
     {  
     
        scanf (" %d", &arr[i]);  
     }  
     
      if(i>0){
	
       
    
     for ( i = 0; i < size; i ++)  
     {  
         for ( j = i + 1; j < size; j++)  
         {  
          
             if ( arr[i] == arr[j])  
             {  
                
                 for ( k = j; k < size - 1; k++)  
                 {  
                     arr[k] = arr [k + 1];  
                 }  
                
                 size--;  
                  
     
                 j--;      
             }  
            
         }  
     }  
      
  }
else

  {
 	 printf("invalid");
 	
  }
    
    printf (" \n Array elements after deletion of the duplicate elements: ");  
      

    for ( i = 0; i < size; i++)  
    {  
        printf (" %d \t", arr[i]);  
    }
printf("\n do you want to continue (1/0):");
scanf("%d",&cont);
   
 }
 
}
