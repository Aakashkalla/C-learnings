# Number Guessing Game (C)

A simple command-line Number Guessing Game written in C. The program generates a random number between **0 and 100**, and the player has **5 chances** to guess it correctly.

## Features

* Generates a random number between 0 and 100.
* Gives the player 5 chances to guess the correct number.
* Provides hints after each incorrect guess:
  * `NUMBER IS HIGHER!`
  * `NUMBER IS LOWER!`
* Validates input to ensure guesses are within the range of 0 to 100.
* Uses pointers to return the generated random number from a function.

## Concepts Practiced
* Functions
* Pointers
* Loops (`while`)
* Conditional statements (`if` / `else`)
* User input with `scanf()`
* Random number generation using `rand()` and `srand()`

## How to Compile

```bash
gcc guessing_game.c -o guessing_game
```

## How to Run

```bash
./guessing_game
```

## Example Output

```text
WELCOME TO NUMBER GUESSING GAME
You have 5 chance to guess the random Number between 0-100

You have 5 chance remaining
Your Guess: 50
NUMBER IS HIGHER!

You have 4 chance remaining
Your Guess: 75
NUMBER IS LOWER!

You have 3 chance remaining
Your Guess: 63
WOOHOOOO! YOU GUESSED IT RIGHT!!
```

## Future Improvements
* Validate non-numeric input.
* Allow the user to play multiple rounds.
* Add difficulty levels (Easy, Medium, Hard).
* Track the number of attempts taken.
* Keep score across multiple games.
