# Pretty line wrapping

**Almost done, but there may be a few flaws in the process. Working on testing and implementation as of 7/14/2023.**

Take inputs line-by-line. Repeat below for each line, until there are no more lines left:

1. Find out if the length of the line is greater than the length of the terminal. If it is less or equal, then just print the line as-is, and **exit function**.
   1. First have `printf` print out the whole line after replacing all `%` insertions, then pipe that into `sed` to remove all `\033` escape sequences to find out the *actual* length of the line after text formatting has been applied.
2. If the line is longer, then find the *last* place where the line can be successfully split (by a space character, comma, [en/em]-dash, or [forward/back]slash, where the position of the split point is less than terminal width). This will be marked as "split point 0". Then without printing, try splitting the lines; if the first line is then less than the width of the terminal, the job is "half" done and the first line should be printed.
3. See how many spaces are in the tail of the first line. (How many spaces occur before the first non-space character). Add that number of spaces to the length of the second line and see if the second line still fits in the terminal. If yes, then just print the next line with the proper indentation. not, then replace the "first line" with the second one and restart the process from step 1.
