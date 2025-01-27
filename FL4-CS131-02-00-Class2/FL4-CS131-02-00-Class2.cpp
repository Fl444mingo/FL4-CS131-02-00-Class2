#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    // Chapter 2 Lab 1 extra credit
    /*
    char g, m;
    int s, p;

    // F = 70, A = 65, empty space = 32, - = 45, + = 43
    for (s = 59; s <= 100; s++) {
        g = 70 - (2 * (s / 60) + s / 70 + s / 80 + s / 90);
        p = s % 10;
        m = 32 + 11 * ((p / 7) + (s / 100)) + 13 * (p < 3);
        cout << s << "-> " << g << endl;
    }
    */

    // Switch case intro
    /*
    char input;

    do {
        cout << "Encounter. Option (A)ttack, (D)efend, (R)un, (Q)uit\n";
        cin >> input;
        switch (input) {
        case 'A':case 'a':
            cout << "Attack effect.\n";
            break;
        case 'D':case 'd':
            cout << "Defense effect.\n";
            break;
        case 'R':case 'r':
            cout << "Run effect.\n";
            break;
        case 'Q':case 'q':
            cout << "Quit effect.\n";
            break;
        default:
            cout << "Invalid input\n";
        }
    } while (input != 'Q' && input != 'q');
    */
    
    // Nested for loop intro
    /*
    int pezDispenser, pez, total = 0;
    for (pezDispenser = 10; pezDispenser > 0; pezDispenser--) {
        cout << "Pez Dispenser #" << pezDispenser << "\n";
        for (pez = 12; pez > 0; pez--) {
            cout << "\tPez #" << pez << "\n";
            total++;
        }
    }
    cout << "There are " << total << " pezz\n";

    int trucks = 3, pallets = 2, cases = 16, packs = 4, cans = 6, total = 0;
    for (int i = 0; i < trucks; i++) {
        cout << "Truck #" << i << "\n";
        for (int j = 0; j < pallets; j++) {
            cout << "\tPallet #" << j << "\n";
            for (int k = 0; k < cases; k++) {
                cout << "\t\tCase #" << k << "\n";
                for (int l = 0; l < packs; l++) {
                    cout << "\t\t\tPack #" << l << "\n";
                    for (int m = 0; m < packs; m++) {
                        cout << "\t\t\t\tCan #" << m << "\n";
                        total++;
                    }
                }
            }
        }
    }
    cout << "There are " << total << " cans\n";
    */

    int numberToGuess, numberGuessed, numberOfGuesses = 3;

    srand(time(NULL));
    numberToGuess = rand() % 10 + 1;

    cout << numberToGuess << "\n";
}