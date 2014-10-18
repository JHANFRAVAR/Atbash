#include <stdio.h>

const char AtoZ[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const char atoz[] = "abcdefghijklmnopqrstuvwxyz";

int main()
{
 char input[100];
 gets(input);
 int i,j,a;

 for(j = 0;j < 100;j++)
 {
    for(i = 0;i < 25;i++)
    {
        if (input[j] == AtoZ[i])
        {          
        input[j] = AtoZ [25-i];
        break;
        }
        if (input[j] == atoz[i])
        {
        input[j] = atoz[25-i];
        break;
        }
    }
 }   

 for(a = 0; a < 1000; a++)
 {
  printf("%s\n", input);
 }
}
