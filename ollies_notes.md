Though there's a few versions kicking about, C++17 is the most recent I think
Clang has a nice vscode extension
uint8 to uint16 is OK, but not integers to floats

ON HEADERS:

Makefiles will get fun though
Most of it can be done with #include
But makefile order comes into play
Compile headers down to .o files, then into an executable
Definitely split headers and implementation though, makes it much nicer to play with
And set a var at the top of the header because you can only include them once in a program
#ifndef SOME_CONSTANT
#define SOME_CONSTANT
Do your shit
Then
#endif
Because the header actually defines the class, you can't define it more than once
Then in the .cpp file, just include the header
Then in files that need the class, also include the header
Mostly, if you need to include a .cpp file, it needs a header


BITS TO RESEARCH:

Makefiles will get fun though
Get ready for segfaults too, lots of manual memcpy and memsets
