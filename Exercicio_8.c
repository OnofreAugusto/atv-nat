#include <stdio.h>
int main()
{
float m, km, hm, dam, dm, cm, mm;
printf("insira a distancia em metros: ");
scanf ("%f", &m);
km = m*1000;
hm = m*100;
dam = m*10;
dm = m/10;
cm = m/100;
mm = m/1000;
printf ("O valor de m em km é: %.2f\n", km);
printf ("O valor de m em hm é: %.2f\n", hm);
printf ("O valor de m em dam é: %.2f\n", dam);
printf ("O valor de m em dm é: %.2f\n", dm);
printf ("O valor de m em cm é: %.2f\n", cm);
printf ("O valor de m em mm é: %.2f\n", mm);


return 0;
}