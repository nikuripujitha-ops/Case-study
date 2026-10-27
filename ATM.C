#include<conio.h>
int main()
{
   
 
   float balance,amount;
   int choice;
   printf ("enter current balance");
   scanf("%f" ,&balance );
   printf ("enter choice (1- balance inquiry,2-with drawl,3-deposit):");
   scanf ("%d",&choice );
   if( choice ==1)
   {
   printf ("current balance:%.2f\n", balance) ;
   }
     else if ( choice==2)
    {
     printf ("enter with drawal amount:");
     scanf("%f",&amount);
     if(amount<=balance )
     {
      balance =balance - amount ;
      printf ("transaction successful\n");
      printf (" remaining balance:%2f\n", balance) ;
     }
      else
      {
       printf (" insufficient balance\n");
      }
    }    
        else if (choice ==3)
       {
       printf (" enter deposit amount: ");
       scanf("%f",&amount); 
       balance =balance +amount;
       printf ("deposit successful\n");
       printf (" updated balance:%2f\n",balance);
       }
       else
       {
       printf ("invalid option\n");
       }
    
   }        
   
     
     
       
     
   
    
   
   
  
  
 
  
  






    