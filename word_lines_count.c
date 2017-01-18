#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

/*Phase 1 of program that functions like wc unix function
 *to output the number of lines, the number of words, 
 *the total number of characters, and the average length of a word
 *without including punctuation
 *Phase 1 prints whatever is the stdin to the screen
 */

int wordCount() {
  //getCharacters() is a that prints all characters to screen
  char ch;
  int charnum = 0;
  int newlinenum = 0;
  int wordnum = 0;
  char prevchar = '.';
  char dchar = ' ';
  bool isprevspace = 1;

  while ((ch = getchar()) != EOF) { //while loop that gets characters until EOF
    charnum = charnum + 1; //increment character counter every getchar()
    if (ch == '\n') { //if the character is a newline increment counter
      newlinenum = newlinenum + 1; 
    }
    if (ch == ' ' || ch == '\n') { //if the character is a space or new line
      isprevspace = 1; //make boolean of previous character being a space true
      dchar = prevchar; //create variable that will be two characters back from next get char to check for double spaces
    }
    else if ((isprevspace && dchar != ' ' && ispunct(ch) == 0) || (dchar == ' ' && ispunct(ch)== 0 && (ispunct(prevchar) || prevchar == ' '))) {
     //basically if this is a new word (preceeded by whitespace) even if double spaced between word or a punctuation before
      wordnum = wordnum + 1;
      isprevspace = 0; 
    } //change the previous char being space boolean to false
    dchar = prevchar;
    prevchar = ch; //advance the character holders for next getchar()
  }    
  printf("-------------\n%u lines\n", newlinenum);
  printf("%u words\n", wordnum);
  printf("%u characters\n", charnum);//print the results
  return 0;
}

int main(){
  return wordCount();
}
