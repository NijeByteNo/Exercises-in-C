/*Napisati program koji za uneta vremena poletanja i sletanja aviona izražena u satima i minutima ispisuje dužinu trajanja leta. Napomena:
Pretpostaviti da su poletanje i sletanje u istom danu kao i da su sve vrednosti
ispravno unete.*/

#include <stdlib.h>
int main ()
{
    double vps,vpm,vds,vdm;//vps = vrijeme polaska sati, vds = vrijeme dolaska sati,
    double tls,tlm;     // tls= trajanje leta sati
        
      printf("Unesite vrijeme polijetanja: ");
      scanf("%lf %lf",&vps,&vpm);
      printf("Unesite vrijeme dolaska: ");
      scanf("%lf %lf",&vds,&vdm);
        
         { tls = vps - vds;
           tlm = vpm - vpm;
         }
printf("Trajanje leta %.lf h %.lf m", tls, tlm);

// NIJE DOBRO
}