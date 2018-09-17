#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int res,opc;

main  ()
{
 do
 {
	printf ("\t\t\t M E N U \n");
	printf ("\n 1.- Altas ");
	puts ("\n 2.- Bajas ");
	puts (" 3.- Cambios ");

	printf ("Selecciona Opcion: ");
	scanf ("%d",&res);
    
   
   
	switch (res)
	 {
		case 1: 
		{
			puts ("\n Altas (UP)");
			break;
			
		}
		case 2:
		{
			puts ("\n bajas (Down)");
			break; 	
		}
		 case 3:
	 	{
	 	   puts ("\n Cambios (Changes)");
	 	   break;	
	 		
 		}
	 	 default:  
		 {
		 	puts ("no hay opcion");
		    break;
		 }
	
	
     }
     
     printf ("deseas repetir el proceso");
     printf ("\n 1 = Yes\t 2 = No \n");
     scanf ("%d",&opc);
     system ("cls");
     
     
} while (opc == 1);
	
}
