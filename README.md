# 🔐 Password Strength Checker (C++)

A beginner-friendly C++ command-line tool that evaluates basic password characteristics and provides security recommendations.

## ✨ Features

- Checks password length (12+ characters)
- Detects uppercase and lowercase letters
- Detects digits and special characters
- Calculates a basic score out of 5
- Provides recommendations for missing criteria
- Handles empty input

## 🛠️ Technologies & Concepts

- C++
- `std::string`
- Loops and conditional statements
- Functions and Boolean variables
- Character classification with `<cctype>`
- Command-line input and output

## 🚀 Getting Started

### Prerequisites

- A C++ compiler, such as `g++`

### Compile

```bash
g++ -std=c++17 -Wall -Wextra password-checker.cpp -o password-checker
```

### Run on Linux

```bash
./password-checker
```

## 🧪 Example

```text
=== Password Strength Checker ===
Enter a test password: HelloWorld123!

--- Security Checks ---
[PASS] At least 12 characters
[PASS] Contains uppercase letter
[PASS] Contains lowercase letter
[PASS] Contains a digit
[PASS] Contains a special character

Score: 5/5
```

## 🎯 Project Goals

- Practice fundamental C++ programming
- Improve code organization using functions
- Explore basic password validation concepts
- Build a foundation for future cybersecurity projects

## ⚠️ Disclaimer

This project is for educational purposes only. It performs basic character-based checks and does not guarantee password security. It does not check password breaches, common passwords, or resistance to guessing attacks.

## 👨‍💻 Author

**Tuncay Sarxanlı**

Information Security Student at Azerbaijan State Oil and Industry University (ASOIU)
