#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int Aaaaaaaaaaaaaaaaa, Aaaaaaaaaaaaaaaa2, Bbbbbbbbbbbbbbbbb, Xxxxxxxxxxxxxxxxx, Cccccccccccccccc1, Cccccccccccccccc2;
   printf("Enter Aaaaaaaaaaaaaaaaa:");
   scanf("%d", &Aaaaaaaaaaaaaaaaa);
   printf("Enter Bbbbbbbbbbbbbbbbb:");
   scanf("%d", &Bbbbbbbbbbbbbbbbb);
   for (int Aaaaaaaaaaaaaaaa2 = Aaaaaaaaaaaaaaaaa; Aaaaaaaaaaaaaaaa2 <= Bbbbbbbbbbbbbbbbb; Aaaaaaaaaaaaaaaa2++)
   printf("%d\n", Aaaaaaaaaaaaaaaa2 * Aaaaaaaaaaaaaaaa2);
   for (int Aaaaaaaaaaaaaaaa2 = Bbbbbbbbbbbbbbbbb; Aaaaaaaaaaaaaaaa2 <= Aaaaaaaaaaaaaaaaa; Aaaaaaaaaaaaaaaa2++)
   printf("%d\n", Aaaaaaaaaaaaaaaa2 * Aaaaaaaaaaaaaaaa2);
   Xxxxxxxxxxxxxxxxx = 0;
   Cccccccccccccccc1 = 0;
   while (Cccccccccccccccc1 < Aaaaaaaaaaaaaaaaa)
   {
   {
   Cccccccccccccccc2 = 0;
   while (Cccccccccccccccc2 < Bbbbbbbbbbbbbbbbb)
   {
   {
   Xxxxxxxxxxxxxxxxx = Xxxxxxxxxxxxxxxxx + 1;
   Cccccccccccccccc2 = Cccccccccccccccc2 + 1;
   }
   }
   Cccccccccccccccc1 = Cccccccccccccccc1 + 1;
   }
   }
   printf("%d\n", Xxxxxxxxxxxxxxxxx);
   Xxxxxxxxxxxxxxxxx = 0;
   Cccccccccccccccc1 = 1;
   do
   {
   Cccccccccccccccc2 = 1;
   do
   {
   Xxxxxxxxxxxxxxxxx = Xxxxxxxxxxxxxxxxx + 1;
   Cccccccccccccccc2 = Cccccccccccccccc2 + 1;
   }
   while (!(Cccccccccccccccc2 > Bbbbbbbbbbbbbbbbb));
   Cccccccccccccccc1 = Cccccccccccccccc1 + 1;
   }
   while (!(Cccccccccccccccc1 > Aaaaaaaaaaaaaaaaa));
   printf("%d\n", Xxxxxxxxxxxxxxxxx);
   system("pause");
    return 0;
}
