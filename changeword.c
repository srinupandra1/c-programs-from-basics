// To change the word from the array



#include<stdio.h>
int main()
{
char *student[] = {"srinu","yuvi","raga","sam"};
printf("The best student is %s\n", student[2]);

student[2] = "trish";
printf("\n The best student is %s\n", student[2]);

return 0;
}



//output :   The best student is raga
//           The best student is trish