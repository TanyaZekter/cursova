#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int Aaaaaaaaaaaaaaaaa, Bbbbbbbbbbbbbbbbb, Xxxxxxxxxxxxxxxxx, Yyyyyyyyyyyyyyyyy;
   printf("Enter Aaaaaaaaaaaaaaaaa:");
   scanf("%d", &Aaaaaaaaaaaaaaaaa);
   printf("Enter Bbbbbbbbbbbbbbbbb:");
   scanf("%d", &Bbbbbbbbbbbbbbbbb);
   printf("%d\n", Aaaaaaaaaaaaaaaaa + Bbbbbbbbbbbbbbbbb);
   printf("%d\n", Aaaaaaaaaaaaaaaaa - Bbbbbbbbbbbbbbbbb);
   printf("%d\n", Aaaaaaaaaaaaaaaaa * Bbbbbbbbbbbbbbbbb);
   printf("%d\n", Aaaaaaaaaaaaaaaaa / Bbbbbbbbbbbbbbbbb);
   printf("%d\n", Aaaaaaaaaaaaaaaaa % Bbbbbbbbbbbbbbbbb);
   Xxxxxxxxxxxxxxxxx = (Aaaaaaaaaaaaaaaaa - Bbbbbbbbbbbbbbbbb) * 10 + (Aaaaaaaaaaaaaaaaa + Bbbbbbbbbbbbbbbbb) / 10;
   Yyyyyyyyyyyyyyyyy = Xxxxxxxxxxxxxxxxx + (Xxxxxxxxxxxxxxxxx % 10);
   printf("%d\n", Xxxxxxxxxxxxxxxxx);
   printf("%d\n", Yyyyyyyyyyyyyyyyy);
   system("pause");
    return 0;
}
