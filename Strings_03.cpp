/*
Erstellen Sie ein Programm, welches ein Wort für maximal 10 gültige Zeichen
(Benutzer gibt nur max. 10 ein) einliest und das erste Zeichen in einen Grossbuchstaben wandelt. 
Beispiel:
	a.)	
        EINGABE: 	hello
 		AUSGABE: 	Hello
 	b.)	a.)+	
        EINGABE: 	Hello
 		AUSGABE: 	Hello
*/

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{

    // String initialisieren
    const int n = 11;
    char string[n];

    cout << "Bitte maximal 10 Zeichen eingeben" << endl;
    cin >> string;

    // Position im ASCII-Zeichensatz prüfen
    if ((string[0] >= 97 && string[0] <= 122))
    {
        string[0] = string[0] - 32;
    }

    cout << string << endl;
}