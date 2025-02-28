# GUI Maze Game in terminal

Date Created : 29-Jan-2023  
Date Tracked with Git : 28-Feb-2025  

This is a GUI maze app that runs in the terminal.  
My very first project, and as such, not well architected.  

## Gameplay and controls  

Upon executing the `maze_game.exe` file or any equivalent file, two A's can be spotted.

``` text
    A     O  O
 OOOOOO   OO O
   O   OOO  OO
             O
 OOOOO  OOOO O
 O       O   O
 O       O   O
OOOO  O    O O
    O OOOOOO O
 O  O        O
OOOOOOOOO A OO
```

WASD keys can be used to move the character (get it? it's both a character in the story and a literal character).

The A at the top is the character to move and the A at the bottom is the destination to move it to.  

The Os represent walls which cannot be traversed.  

When the top A reaches the bottom A, the game ends and the user is given the option to replay the game.

``` text
OO    OO    OOOO     OO    OO                    
 OO  OO   OOO  OOO   OO    OO                    
  OOOO    OO    OO   OO    OO                    
   OO     OO    OO   OO    OO                    
   OO     OOO  OOO   OO    OO                    
   OO       OOOO       OOOO                      
                                                 
 O              O     OOOOO     OO    OO   ||  ||
 OO            OO   OOO   OOO   OOO   OO   ||  ||
  OO          OO    OO     OO   OO O  OO   ||  ||
   OO   OO   OO     OO     OO   OO  O OO   ||  ||
    OO O  O OO      OOO   OOO   OO   OOO         
     OO    OO         OOOOO     OO    OO   OO  OO

You won! Hit anything to play again!
```  
