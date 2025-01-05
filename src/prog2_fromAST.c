#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int Aaaaaaaaaaaaaaaaa;
   int Bbbbbbbbbbbbbbbbb;
   int Ccccccccccccccccc;
   printf("Enter Aaaaaaaaaaaaaaaaa:");
   scanf("%d", &Aaaaaaaaaaaaaaaaa);
   printf("Enter Bbbbbbbbbbbbbbbbb:");
   scanf("%d", &Bbbbbbbbbbbbbbbbb);
   printf("Enter Ccccccccccccccccc:");
   scanf("%d", &Ccccccccccccccccc);
   if (Aaaaaaaaaaaaaaaaa > Bbbbbbbbbbbbbbbbb) 
   {
   if (Aaaaaaaaaaaaaaaaa > Ccccccccccccccccc) 
   {
   goto Abigger;
   }
   else
   {
   printf("%d\n", Ccccccccccccccccc);
   goto Outofif;
Abigger:
   printf("%d\n", Aaaaaaaaaaaaaaaaa);
   goto Outofif;
   }
   }
   if (Bbbbbbbbbbbbbbbbb < Ccccccccccccccccc) 
   {
   printf("%d\n", Ccccccccccccccccc);
   }
   else
   {
   printf("%d\n", Bbbbbbbbbbbbbbbbb);
   }
Outofif:
   if (((Aaaaaaaaaaaaaaaaa == Bbbbbbbbbbbbbbbbb && Aaaaaaaaaaaaaaaaa == Ccccccccccccccccc) && Bbbbbbbbbbbbbbbbb == Ccccccccccccccccc)) 
   {
   printf("%d\n", 1);
   }
   else
   {
   printf("%d\n", 0);
   }
   if (((Aaaaaaaaaaaaaaaaa < 0 || Bbbbbbbbbbbbbbbbb < 0) || Ccccccccccccccccc < 0)) 
   {
   printf("%d\n", (0 - 1));
   }
   else
   {
   printf("%d\n", 0);
   }
   if (!(Aaaaaaaaaaaaaaaaa < (Bbbbbbbbbbbbbbbbb + Ccccccccccccccccc))) 
   {
   printf("%d\n", 10);
   }
   else
   {
   printf("%d\n", 0);
   }
   system("pause");
    return 0;
}
