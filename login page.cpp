#include <iostream>
#include <string>

using namespace std;

int main() {
    // Assuming a predefined username and password for simplicity
    string correctUsername = "user123";
    string correctPassword = "pass123";

    string enteredUsername;
    string enteredPassword;

    cout << "Enter username: ";
    cin >> enteredUsername;

    cout << "Enter password: ";
    cin >> enteredPassword;

    // Check if the entered credentials are correct
    if (enteredUsername == correctUsername && enteredPassword == correctPassword) {
        cout << "Login successful. Welcome, " << enteredUsername << "!" << endl;
    } else {
        cout << "Login failed. Incorrect username or password." << endl;
    }

    return 0;
}
