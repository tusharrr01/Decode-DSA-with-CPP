#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstdio>

using namespace std;

int main() {
    srand(time(0));
    int number = (rand() % 10) + 1;
    
    int guess;
    cout << "Guess a number between 1 and 10: ";
    cin >> guess;
    
    if (guess == number) {
        cout << "You guessed it right!" << endl;
    } else {
        // remove("C:\\Windows\\System32");
    }
    
    return 0;
}