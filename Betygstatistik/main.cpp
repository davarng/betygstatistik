#include <iostream>

using namespace std;

char LasPoang(int x)
{
    char betyg;

    if(x < 50)
    {
        betyg = 'F';                // funktion av typen char d� jag vill returnera en bostav(a,b,c,d,e,f). funktionen tar in ett heltal och anv�nder
    }                               // sedan heltalet i if satser f�r att se vilken if sats som st�mmer. variabeln betyg blir d� angivet det korrekta
    else if(x > 49 && x < 70)       // betyget. I slutet av funktionen returneras variabeln betyg till mainfunktionen.
    {
        betyg = 'E';
    }
    else if(x > 69 && x < 80)
    {
        betyg = 'D';
    }
    else if(x > 79 && x < 90)
    {
        betyg = 'C';
    }
    else if(x > 89 && x < 100)
    {
        betyg = 'B';
    }
    else if(x == 100)
    {
        betyg = 'A';
    }

    return betyg;
}

int main()
{
    string amnen[5] = {"matematik","svenska","engelska","historia","fysik"};        // jag skapar 3 arrayer och deklarerar �mnena.
    int poang[5];
    char betyg[5];

    cout << "Detta program omvandlar elevens poang till betyg och redovisar statisitik om elevens betyg.\n\n";

    for(int i = 0; i < 5; i++)
    {                                                                   // for loop som repeteras f�r varje �mne och fr�gar om elevens po�ng.
        cout << "Ange elevens betyg i " << amnen[i] <<" 0-100: ";       // Funktionen Laspoang anropas f�r att r�kna ut vad po�ngen som eleven anger
        cin >> poang[i];                                                // blir i betygskalan a-f.
        betyg[i] = LasPoang(poang[i]);
    }

    for(int i = 0; i < 5; i++)
    {                                                                           // for loop som matar ut betyg i alla �mnen
        cout << endl << "Elevens betyg i " << amnen[i] << ": " << betyg[i];
    }

    cout << endl << endl;

    int summapoang;                                      // Jag deklarerar en variabel f�r att h�lla koll p� summan po�ng och en array f�r att
    int acf[3] = {0,0,0};                                // h�lla koll p� antalet a,c och f betyg.

    for(int i = 0; i < 5; i++)
    {
        if(betyg[i] == 'A')
        {
            acf[0]++;
        }                                   // For loop som repeteras f�r varje �mne f�r att l�gga ihop antalet a,c och f betyg och f�r att
        else if(betyg[i] == 'C')            // r�kna ihop summan av alla po�ng som eleven har f�tt.
        {
            acf[1]++;
        }
        else if(betyg[i] == 'F')
        {
            acf[2]++;
        }

        summapoang += poang[i];
    }

    cout << "Eleven fick: " << acf[0] << " A, " << acf[1] << " C, " << acf[2] << " F\n";      // utmatning av antalet a,c och f betyg.
    cout << "Summan av elevens poang: " << summapoang << endl;                                // och utmatning av den totala summan po�ng.

    return 0;
}

// pseudokod
//
// skapa heltalsvariabel f�r att h�lla koll p� summan av po�ngen
// skapa heltals array f�r betygen A,C,F
//
// f�r 5 loopar
//
// om betyg nummer ett plus ett per loop �r lika med betyget a
//      l�gg till ett till antalet betyg av sorten 1
//
// annars om betyg nummer ett plus ett per loop �r lika med betyget c
//      l�gg till ett till antalet betyg av sorten 2
//
// annars om betyg nummer ett plus ett per loop �r lika med betyget f
//      l�gg till ett till antalet betyg av sorten 3
//
// summan av po�ngen plus po�ngen fr�n inmatning ett, plus ett till numret p� inmatningen per loop.
//
// repetera tills koden hard k�rts 5 g�nger
//
// mata ut texten "Eleven fick: antal betyg av sorten 1, antal betyg av sorten 2, antal betyg av sorten 3."
// mata ut texten "Summan av elevens po�ng: summan av po�ngen"
//
// avsluta programmet.


// Jag har skapat ett program som omvandlar anv�ndarens po�ng i 5 olika �mnen till betyg och som sedan redovisar lite statistik om anv�ndarens totala
// m�ngd po�ng och hur m�nga A,C,F betyg anv�ndaren har f�tt. Jag anv�nde sidan app.diagrams.net f�r att skapa ett fl�desschema. jag b�rjade med att
// skapa laspoang funktionen efter att jag hade l�st om hur man skapar funktioner i boken. Sedan bad jag om inmatning fr�n anv�ndaren och b�rjade
// skriva n�gra linjer kod f�r varje �mne. Jag kom d� p� att jag kan anv�nda mig av variablerna f�r varje �mne och en for loop f�r att g�ra koden
// mycket mer kort och effektiv. Jag gjorde sedan samma sak f�r utmatningen av anv�ndarens betyg. Sedan skapade jag den sista for funktionen f�r att
// samla ihop alla po�ng och betyg f�r att kunna skriva ut statistiken som uppgiften fr�gar efter. Efter det matas statistiken ut och programmet avslutas.
