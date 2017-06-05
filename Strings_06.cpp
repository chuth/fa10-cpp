/*
Erstellen Sie ein Programm, welches einen Satz für maximal 100 gültige Zeichen 
(Benutzer gibt nur max. 100 ein) einliest und die Anzahl der alphabetischen und 
numerischen Zeichen sowie der Sonderzeichen ausgibt.
Beispiel :	
    EINGABE: 	123456 Hello !
 	AUSGABE: 	alphabetischen Zeichen : 5
 				numerischen Zeichen : 6
 				Sonderzeichen : 3
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

    const int n = 101;
    char string[n];
    int i, alpha, num, sonder = 0;

    cout << "Bitte maximal 100 Zeichen eingeben" << endl;

    cin.getline(string, sizeof(string));

    while (string[i] != '\0')
    {

        if (string[i] >= 48 && string[i] <= 57)
        {
            num++;
            i++;
            continue;
        }
        if ((string[i] >= 65 && string[i] <= 90)      // Großbuchstaben
            || (string[i] >= 97 && string[i] <= 122)) // Kleinbuchstaben
        {
            alpha++;
            i++;
            continue;
        }

        sonder++;
        i++;
    }

    cout << "Numerische Zeichen: " << num << endl;
    cout << "Alphabetische Zeichen: " << alpha << endl;
    cout << "Sonderzeichen: " << sonder << endl;
}