#include<stdio.h>
int main ()
{
    char a;
    
    printf("Enter small letter of alphabet:");
    scanf(" %c", &a);
    
    if (a=='a'|| a=='e'|| a=='i'|| a=='o' || a=='u')
    {
       printf("Letter %c is a vowel.", a);
    }
    else if(a != 'a' || a=='e'|| a=='i'|| a== 'o' || a== 'u')
    {
     printf("Letter %c is a constant.", a);
    }
    else
    {
    printf("Error");
    }
    return 0;
} // NE ZNAM, NECE...Stalno kaze da je constant, a ako ukucam broj ili znak ne pokaze error...
  //Rijesio sam pola problema sa tim sto sam nasao na netu da " %c" <----mora se ovako pisat 
  //odmaknuto za jedno polje.           Ali krvavo else i dalje ne radi! AAAaaaaAA