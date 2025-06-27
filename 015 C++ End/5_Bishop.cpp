#include <iostream>
#include <algorithm> // For std::min
using namespace std;

int main() {
    int A, B;
    
    // Input position of the bishop
    cout << "Enter the position of the bishop (row and column between 1 and 8): ";
    cin >> A >> B;

    // Number of moves a bishop can make in each direction:
    int moves = 0;
    
    // Moves in the top-right diagonal
    moves += min(8 - A, 8 - B);
    // Moves in the top-left diagonal
    moves += min(8 - A, B - 1);
    // Moves in the bottom-right diagonal
    moves += min(A - 1, 8 - B);
    // Moves in the bottom-left diagonal
    moves += min(A - 1, B - 1);
    
    // Output the number of possible moves
    cout << "The bishop can make " << moves << " moves from position (" << A << ", " << B << ")." << endl;
    
    return 0;
}
