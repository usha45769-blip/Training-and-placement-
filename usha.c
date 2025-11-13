#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
  char password[100];
  int length,hasUpper=0,hasLower=0,hasDigit=0,hasSpecial=0;

   printf("Enter your password:");
   fgets(password,sizeof(password),stdin);

   password[strcspn(password,"\n")]='\0';
   
   length=strlen(password);
 
   for(int i=0;i<length;i++){
   if(isupper(password[i]))
    hasUpper=1;
    else if(islower(password[i]))
    hasLower=1;
    else if(isdigit(password[i]))
    hasDigit=1;
    else
     hasSpecial=1;
}
  if(length>=8 &&hasUpper&&hasLower&&hasDigit&&hasSpecial)
    printf("Password strength:STRONG\n");
     else if(length>=6 &&((hasUpper&&hasLower)||(hasLower&&hasDigit)))
    printf("Password Strength:MEDIUM\n");
     else
    printf("Password Strength:WEAK\n");
     return 0;
}