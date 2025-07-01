#include <iostream>
using namespace std;

int main() {
    int pile = 20; 
    int currentPlayer = 1;

    cout<<endl<<"Welcome to the NIM game with one pile!"<<endl<<endl;

    while (pile > 0) {
        // Show the current state of the pile
        cout << "Pile: " << pile << endl;

        int objectsToRemove;
        
        // Ask the current player how many objects to remove
        cout << "Player " << currentPlayer << ", how many objects do you want to remove? ";
        cin >> objectsToRemove;

        // Check if the move is valid
        if (objectsToRemove <= 0) {
            cout << "You must remove at least one object. Try again." << endl;
            continue;
        }

        if (objectsToRemove > 3) {
            cout << "You cannot remove more than 3 objects at a time. Try again." << endl;
            continue;
        }

        if (objectsToRemove > pile) {
            cout << "Not enough objects in the pile. Try again." << endl;
            continue;
        }

        // Apply the move
        pile -= objectsToRemove;

        // Check if the game is over
        if (pile == 0) {
            cout << "Player " << currentPlayer << " wins!" << endl;
            break;
        }

        // Switch players
        currentPlayer = (currentPlayer == 1) ? 2 : 1;
    }

    return 0;
}
