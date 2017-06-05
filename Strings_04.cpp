/* 
Erstellen Sie ein Programm, welches eine Zeichenkette für maximal 5 gültige Zeichen 
(Benutzer gibt nur max. 5 ein) einliest und die Anzahl der eingelesenen Zeichen soll 
begrenzt werden. 

Beispiel (max. 5 Z.):
    EINGABE: 	123456 Hello !
 	AUSGABE: 	12345
*/

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{

    // String initialisieren
    const int n = 6;
    char string[n];
    int i = 0;

    cout << "Bitte Zeichen eingeben. Eingabe wird auf 5 Zeichen gekürzt." << endl;
    cin >> string;

    while (i < 5)
    {
        cout << string[i];
        i++;
    }
    cout << endl;
}