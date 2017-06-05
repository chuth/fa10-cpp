/*
Erstellen Sie ein Programm, welches einen Satz für maximal 100 gültige Zeichen
(Benutzer gibt nur max. 100 ein) einliest und die Anzahl der Wörter ausgibt. 
a.) Beispiel:
 EINGABE: 	123456 Hello
 AUSGABE: 	Wörter : 2
b.) Beispiel (a.)+mehr Leerzeichen): 
 EINGABE: 	123456     Hello
 AUSGABE: 	Wörter : 2
 */

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

    const int n = 101;
    char string[n];
    int i, wordcount = 0;

    cout << "Bitte maximal 100 Zeichen eingeben" << endl;

    cin.getline(string, sizeof(string));

    while (string[i] != '\0')
    {
        // Aktuelles Zeichen kein Leerzeichen
        // und nächstes Zeichen Leerzeichen oder String-Ende
        if(string[i] != 32 && (string[i + 1] == 32 || string[i + 1] == '\0')) {
            wordcount++;
        }
        i++;
    }

    cout << "Wörter: " << wordcount << endl;
}