#include <stdio.h>

int main (){

   int i = 11;
   if (i%2==0){
      EVEN:
      printf("The number is even\n");
      goto END;
   }
   else{
      ODD:
      printf("The number is odd\n");
   }
   END:
      printf("end of program");


   return 0;
}
