#include <iostream>
#include <cstring> // Dla funkcji strchr i strlen
#include <cctype>

using namespace std;

void fChange(char sequence[30], char temp[30], int spa, int len) {
    strncpy(temp, sequence, spa);
    strcpy(sequence, sequence + spa + 1);
    strcat(sequence, " ");
    strcat(sequence, temp);
    cout << sequence << endl;
}

void changeA(char sequence[30], char temp[30], int len) {
    int index = 0; // Indeks dla modyfikowanego zdania

    for (int i = 0; i < len; i++) {
        if (sequence[i] == 'a') {
            temp[index++] = '%';
        }
        // Skopiuj znak z oryginalnego zdania do modyfikowanego zdania
        temp[index++] = sequence[i];
    }

    temp[index] = '\0'; // Ustaw znak końca ciągu
    cout << temp << endl;
}

void bigLetter(char sequence[30], int len) {
    sequence[0] = toupper(sequence[0]);
    sequence[len - 1] = toupper(sequence[len - 1]);
    cout << sequence << endl;
}
int main() {
   char sequence[30];
    cout << "Enter some sequence: ";
    cin.getline(sequence, sizeof(sequence));

    char *found = strchr(sequence, ' ');

    int spa = found - sequence;

    cout << "Pierwsza spacja znajduje się na indeksie: " << spa << endl;

    int len = strlen(sequence);
    char temp[30];
    fChange(sequence, temp, spa, len);
    changeA(sequence, temp, len);
    bigLetter(sequence, len);
    return 0;
}