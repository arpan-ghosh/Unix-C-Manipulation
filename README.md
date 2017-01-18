# Unix-C-Manipulation
Taking UNIX functions like WC (word counter) and manipulating them for improvements

This program has 4 phases that ultimately build to create a  program that functions like a word counter for stdin that counts the number of clines, characters, and words. It also displays the average number of characters in the words without including punctuation as part of a word. 


Phase 1: stdin_cat.c - this program takes the stdin and displays the characters to the screen

Phase 2: word_count.c - takes the same characters from stdin but counts the number of them

Phase 3: word_lines_count.c - adds the implementation of counting the number of new lines and words from input

Phase 4: average_char_cat.c - adds the average number of characters per word to output by counting the number of characters without including punctuation in word (unlike wc command) and divides that by number of words
