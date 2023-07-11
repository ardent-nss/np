# Pretty line wrapping

**EARLY WIP, SOME PARTS MAY NOT MAKE SENSE**

Take inputs line-by-line. Repeat below for each line, until there are no more lines left:

1. Find out if the length of the line is greater than the length of the terminal. If it is less or equal, then just print the line as-is, and `exit function`.
2. If the line is longer, then find the *last* place where the line can be successfully split (by a space character or comma). This will be marked as "split point 0". Every split point to the left is marked as split point n+1.
3. See how many spaces are in the tail of the line that comes before. (How many spaces occur before the first non-space character). Add that number of spaces to the length of the second line and see if wrapping at point 0 is still viable. If not, try wrapping at point n+1 until the length of the first line is less than or equal to terminal width.
4. Attempt splitting at whatever point was decided to be viable.
5. Insert the proper number of spaces before the second wrapped line.
6. Check the second line to see if it is less than or equal to the terminal's width.
