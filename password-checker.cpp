
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool hasUppercase(const string& password) {
    for (unsigned char ch : password) {
        if (isupper(ch)) {
            return true;
        }
    }
    return false;
}

bool hasLowercase(const string& password) {
    for (unsigned char ch : password) {
        if (islower(ch)) {
            return true;
        }
    }
    return false;
}

bool hasDigit(const string& password) {
    for (unsigned char ch : password) {
        if (isdigit(ch)) {
            return true;
        }
    }
    return false;
}

bool hasSpecialCharacter(const string& password) {
    for (unsigned char ch : password) {
        if (!isalnum(ch) && !isspace(ch)) {
            return true;
        }
    }
    return false;
}

void showCheck(const string& label, bool passed) {
    cout << (passed ? "[PASS] " : "[FAIL] ")
         << label << '\n';
}

int main() {
    string password;

    cout << "===============================\n";
    cout << "   PASSWORD STRENGTH CHECKER\n";
    cout << "===============================\n";

    cout << "Enter a test password: ";
    getline(cin, password);

    if (password.empty()) {
        cout << "Error: Password cannot be empty.\n";
        return 1;
    }

    bool longEnough = password.length() >= 12;
    bool upper = hasUppercase(password);
    bool lower = hasLowercase(password);
    bool digit = hasDigit(password);
    bool special = hasSpecialCharacter(password);

    cout << "\n--- Security Checks ---\n";

    showCheck("At least 12 characters", longEnough);
    showCheck("Contains uppercase letter", upper);
    showCheck("Contains lowercase letter", lower);
    showCheck("Contains a digit", digit);
    showCheck("Contains a special character", special);

    int score = 0;

    if (longEnough) score++;
    if (upper) score++;
    if (lower) score++;
    if (digit) score++;
    if (special) score++;

    cout << "\nScore: " << score << "/5\n";

    cout << "\n--- Recommendations ---\n";

    if (!longEnough) {
        cout << "- Use a longer password (12+ characters).\n";
    }

    if (!upper) {
        cout << "- Consider including an uppercase letter.\n";
    }

    if (!lower) {
        cout << "- Consider including a lowercase letter.\n";
    }

    if (!digit) {
        cout << "- Consider including a digit.\n";
    }

    if (!special) {
        cout << "- Consider including a special character.\n";
    }

    if (score == 5) {
        cout << "- All basic checks passed!\n";
    }

    cout << "\nNote: This is a basic educational check,\n";
    cout << "not a guarantee of password security.\n";

    return 0;
}
