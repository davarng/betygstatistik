#include <iostream>

using namespace std;

char LasPoang(int x)
{
    char betyg;

    if(x < 50)
    {
        betyg = 'F';                // funktion av typen char då jag vill returnera en bostav(a,b,c,d,e,f). funktionen tar in ett heltal och använder
    }                               // sedan heltalet i if satser för att se vilken if sats som stämmer. variabeln betyg blir då angivet det korrekta
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
    string amnen[5] = {"matematik","svenska","engelska","historia","fysik"};        // jag skapar 3 arrayer och deklarerar ämnena.
    int poang[5];
    char betyg[5];

    cout << "Detta program omvandlar elevens poang till betyg och redovisar statisitik om elevens betyg.\n\n";

    for(int i = 0; i < 5; i++)
    {                                                                   // for loop som repeteras för varje ämne och frågar om elevens poäng.
        cout << "Ange elevens betyg i " << amnen[i] <<" 0-100: ";       // Funktionen Laspoang anropas för att räkna ut vad poängen som eleven anger
        cin >> poang[i];                                                // blir i betygskalan a-f.
        betyg[i] = LasPoang(poang[i]);
    }

    for(int i = 0; i < 5; i++)
    {                                                                           // for loop som matar ut betyg i alla ämnen
        cout << endl << "Elevens betyg i " << amnen[i] << ": " << betyg[i];
    }

    cout << endl << endl;

    int summapoang;                                      // Jag deklarerar en variabel för att hålla koll på summan poäng och en array för att
    int acf[3] = {0,0,0};                                // hålla koll på antalet a,c och f betyg.

    for(int i = 0; i < 5; i++)
    {
        if(betyg[i] == 'A')
        {
            acf[0]++;
        }                                   // For loop som repeteras för varje ämne för att lägga ihop antalet a,c och f betyg och för att
        else if(betyg[i] == 'C')            // räkna ihop summan av alla poäng som eleven har fått.
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
    cout << "Summan av elevens poang: " << summapoang << endl;                                // och utmatning av den totala summan poäng.

    return 0;
}

// pseudokod
//
// skapa heltalsvariabel för att hålla koll på summan av poängen
// skapa heltals array för betygen A,C,F
//
// för 5 loopar
//
// om betyg nummer ett plus ett per loop är lika med betyget a
//      lägg till ett till antalet betyg av sorten 1
//
// annars om betyg nummer ett plus ett per loop är lika med betyget c
//      lägg till ett till antalet betyg av sorten 2
//
// annars om betyg nummer ett plus ett per loop är lika med betyget f
//      lägg till ett till antalet betyg av sorten 3
//
// summan av poängen plus poängen från inmatning ett, plus ett till numret på inmatningen per loop.
//
// repetera tills koden hard körts 5 gånger
//
// mata ut texten "Eleven fick: antal betyg av sorten 1, antal betyg av sorten 2, antal betyg av sorten 3."
// mata ut texten "Summan av elevens poäng: summan av poängen"
//
// avsluta programmet.


// Jag har skapat ett program som omvandlar användarens poäng i 5 olika ämnen till betyg och som sedan redovisar lite statistik om användarens totala
// mängd poäng och hur många A,C,F betyg användaren har fått. Jag använde sidan app.diagrams.net för att skapa ett flödesschema. jag började med att
// skapa laspoang funktionen efter att jag hade läst om hur man skapar funktioner i boken. Sedan bad jag om inmatning från användaren och började
// skriva några linjer kod för varje ämne. Jag kom då på att jag kan använda mig av variablerna för varje ämne och en for loop för att göra koden
// mycket mer kort och effektiv. Jag gjorde sedan samma sak för utmatningen av användarens betyg. Sedan skapade jag den sista for funktionen för att
// samla ihop alla poäng och betyg för att kunna skriva ut statistiken som uppgiften frågar efter. Efter det matas statistiken ut och programmet avslutas.
