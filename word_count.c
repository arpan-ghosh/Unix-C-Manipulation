#include <stdio.h>
#include <ctype.h>

/*Phase 1 of program that functions like wc unix function
 *to output the number of lines, the number of words, 
 *the total number of characters, and the average length of a word
 *without including punctuation
 *Phase 1 prints whatever is the stdin to the screen
 */

int getCharacters() {
  //getCharacters() is a that prints all characters to screen
  char ch;
  int charnum = 0;
  while ((ch = getchar()) != EOF) { //while loop that gets characters until EOF
    charnum = charnum + 1; //increment num of characters  
  }    
  printf("-------------\n%u characters\n",charnum); //print to screen the number
  return 0;
}

int main(){ //call method that counts characters
  return getCharacters();
}
