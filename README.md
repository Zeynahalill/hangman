# hangman
Hangman game written in C programming language

A simple terminal-based Hangman game written in C.  
The program randomly selects a fruit name from a predefined list, and the player has 7 attempts to guess the correct word.

---

## Game Description

- Random word selection (fruits)
- Underscore-based hidden word display
- Tracks correct and incorrect guesses
- Game ends when:
  - All letters are correctly guessed, or
  - The player reaches 7 wrong attempts

---

## Requirements

- C compiler (e.g., GCC)
- Terminal or Command Prompt

---

## How to Play

1. The word is shown as underscores.  
2. Enter one letter each turn.  
3. Each wrong letter increases the mistake count.  
4. You win if you guess the entire word before reaching 7 mistakes.

---

## How to Run

```bash
git clone https://github.com/<your-username>/hangman.git
cd hangman
gcc hangmanGame.c -o hangman
./hangman   # Windows users: hangman.exe
