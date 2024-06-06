#pragma once


#define VIDEO_ADDRESS 0xb8000
#define WHITE_ON_BLUE  0x1f

// Assumes VGA text mode 7 (80 x 25)
// ref: https://en.wikipedia.org/wiki/VGA_text_mode
#define MAX_WIDTH 80
#define MAX_HEIGHT 25


extern unsigned char* framebuffer;


// Blanks the screen by writing the ASCII space character to each character cell
void clear();

// Print a string to the current cursor position and then moves the cursor to the next line
void printline(char* s);

// Print a string to the current cursor position
void printstring(char* s);

// Print a character to the current cursor position
void printchar(char c);