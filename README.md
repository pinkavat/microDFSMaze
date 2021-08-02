# Micro DFS Maze Generator

An exercise in code golf; generates a maze using [depth-first search](https://en.wikipedia.org/wiki/Maze_generation_algorithm#Randomized_depth-first_search) and prints it.
The source code is 326 characters long (so a 23 x 15 maze is larger than the code that created it).
Ironically only a third is the actual generation algorithm; the rest is storage and printing.

## Installation

Download [microDFSMaze.c](microDFSMaze.c) and compile it with any C compiler.
Because the code is compacted, headers will have to be manually included, like so:
```
cc -include stdio.h -include stdlib.h -include time.h microDFSMaze.c
```
Ignore any compiler warnings that appear -- code golf is hardly "best practices".

## Usage

Run the resulting executable with two command-line arguments: the width and the height.
Both must be non-negative integers; the generator works properly if the values are **odd** and **greater than 5**.

The code will then generate its maze and print it to `stdout`. The output is coloured using ANSI escape codes, which most terminal emulators support.
