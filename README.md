# Chess Game in C++ ♟️
Let's learn how this game of chess works!
## Overview
This project is a simple implementation of a chess game in C++. It includes functionalities for starting a new game, restarting, saving, and loading games.

## Files
 The game logic is encapsulated in multiple following files:
- `chess.cpp`: The main application file that handles user interactions, game initialization, and gameplay.
- `GameData.h`: Contains the data structures and function prototypes for game management and moves.
- `GameData.cpp`: Implements the game logic including move validation, check/checkmate detection, and game saving/loading.

## Features
- **New Game**: Start a new game and set up player names.
- **Restart Game**: Restart the current game.
- **Save Game**: Save the ongoing game to a file for future continuation.
- **Load Game**: Load a previously saved game from a file.

## Example Usage

1. **Start a New Game**:
    ```plaintext
    Enter First(WHITE) Player's Info
    [Input Player 1 Name]

    Enter Second(BLACK) Player's Info
    [Input Player 2 Name]
    ```

2. **Gameplay**:
    ```plaintext
    Column number: 1
    P1
     1 2 3 4 5 6 7
    | | | | | | | |
    | | | | | | | |
    | | | | | | | |
    | | | | | | | |
    | | | | | | | |
    |o| | | | | | |
    ```

3. **Saving/Loading**:
    Use the provided options to save or load games.

## Building and Running
1. **Compile**: Ensure you have a C++ compiler (e.g., g++) and compile all source files:
    ```sh
    g++ -o chess chess.cpp GameData.cpp
    ```

2. **Run**:
    ```sh
    ./chess
    ```

## Contributing
Feel free to fork the repository and submit pull requests for any enhancements or bug fixes.

Enjoy your game of chess! If you have any questions or issues, please open an issue on GitHub.
