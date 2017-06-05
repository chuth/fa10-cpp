/*
Erstellen Sie ein Programm, welches einen Satz für maximal 100 gültige Zeichen 
(Benutzer gibt nur max. 100 ein) einliest und die ersten Zeichen der Wörter in 
einen Grossbuchstaben wandelt. 
Beispiel:	
    EINGABE: 	hello, Boy’s and girl’s!
 	AUSGABE: 	Hello, Boy’s And Girl’s!
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

    const int n = 101;
    char string[n];
    int i;

    cout << "Bitte maximal 100 Zeichen eingeben" << endl;
    
    cin.getline(string,sizeof(string));

    // Ersten Buchstaben ersetzen falls nötig
    if ((string[0] >= 97 && string[0] <= 122))
    {
        string[0] = string[0] - 32;
    }
    // Für 1 bis n...
    for (i = 1; i < n; i++)
    {
        // .. prüfen ob kleingeschrieben ..
        if ((string[i] >= 97 && string[i] <= 122) 
            && string[i-1] == 32) // .. und prüfen ob vorher Leerzeichen (Ascii 32) 
        {
            string[i] = string[i] - 32;
        }
    }

    cout << string << endl;
}