#include<stdio.h>
unsigned char  chiper[8] = "abcdefgh";

unsigned char  tmp[sizeof(chiper)];

unsigned char key1[4]= "aaaa";
unsigned char key2[4]= "aaab";

int i = 0;
int m = 0;

    //Using 6 round for enc and dec

    for(m = 0; m < 6; m++)
{
    // S-Box , need to optimize
    // like tmp[1] = chiper [3] ...
    // it is wasting some cycles :) like this
    for(i = 0; i < 8; i++)
    {
        tmp[i]     = chiper[(i+2) % 8];
        tmp[i+1]   = chiper[(i+5) % 8];
    }
        for (i = 0; i < 8; i++)
               chiper[i] = tmp[i];

      //XOR-ing key with text
      for (i = 0; i < 4; i++)
      {
           chiper[i]   =chiper[i]   ^  key1[i];
           chiper[i+4] =chiper[i+4] ^  key2[i];
      }

     //Add new round key
     for(i = 0; i < 4 ; i++)
    {
        key1[i] = key1[i] ^ (chiper[[i]] ^ (chiper[i+4] << 2)) ;
            key2[i] = key2[i] ^ (chiper[i] ^ (chiper[i+4] << 2)) ;
    } 
    
}
