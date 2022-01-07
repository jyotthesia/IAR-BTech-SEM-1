#include<stdio.h>  
#include<stdlib.h>  
void main ()  
{  
    char c;  
    int choice,dummy,n1,n2,ans;    
    do{  
    printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");  
    scanf("%d",&choice);  
    if(choice>=1 && choice<=4)
      {
         printf("\nEnter any two Numbers: ");
         scanf("%d %d", &n1, &n2);
         
      }
      
    switch(choice)  
    {  
        case 1 :   
            ans = n1+n2;
            printf("\nResult = %d", ans);
            break;  
        case 2:    
            ans = n1-n2;
            printf("\nResult = %d", ans);  
            break;  
        case 3:  
            ans = n1*n2;
            printf("\nResult = %d", ans);
            break;           
        case 4:
            ans = n1/n2;
            printf("\nResult = %d", ans);
            break;  
        default:   
        printf("Please enter valid choice");      
    }  
    printf("\nDo you want to enter more?");   
    scanf("%d",&dummy);  
    scanf("%c",&c);  
    }while(c=='y');  
}  
