/*
Erstellen Sie ein Programm, welches ein Wort für maximal 10 gültige Zeichen 
(Benutzer gibt nur max. 10 ein) einliest und die Anzahl der Zeichen des Wortes ausgibt. 
Beispiel: 	
EINGABE: Hello
AUSGABE: 5 gültige Zeichen
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

  // String und Zähler initialisieren
  const int n = 11;
  char string[n];
  int i = 0;

  // String abfragen
  cout << "Bitte maximal 10 Zeichen eingeben" << endl;
  cin >> string;

  // Zähler i für jedes Zeichen erhöhen, solange Endzeichen nicht erreicht ist
  while (string[i] != '\0')
  {
    i++;
  }

  // Zähler i ausgeben
  cout << i << endl;
}
