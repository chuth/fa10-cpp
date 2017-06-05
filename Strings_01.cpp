/*
1.	Erstellen Sie bitte ein Programm, welches eine Wandlung des deutschen Dezimal-trennzeichens (,) in das englische Dezimaltrennzeichen (.) durchf�hrt und die gewandelte Zeichenkette ausgibt.

Beispiel:
 	EINGABE: 	1358,158
 	AUSGABE: 	1358.158

*/

#include <iostream>
#include <stdio.h>


using namespace std;

int main()
{
const int n=11;
char zk[n];
int i;

printf("Dezimaltrennzeichen\n");
printf("Fliesskommazahl? ");

cin>>zk;
i=0;
while(zk[i]!='\0')
  {
  if(zk[i]==',')
    zk[i]='.';
  i++;
  }
printf("%s",zk);

}





