CSE 131 PROJECT 1 (WINTER 2016)

Some parts of the lexer rules are pretty self explanatory (keywords, integer constants, operators, etc), so our README will skip over those explanations and get down to the more complex parts of the project.

1. MULTILINE COMMENTS

	For multiline comments, we used flex states to keep track of whether or not we are currently consuming a multiline comment. We ignore anything inside the comment until we reach the end of comment (*/). If we reach the eof first, we report an unclosed comment error.

2. FLOAT CONSTANTS

	For float constants, we came up with the idea of separating them into two cases:
	1.	There is at least one digit before the decimal point.
	2.	There is at least one digit after the decimal point.

	We then added the cases for scientific notation and the float suffix (f).

	Our regex captures cases of floats such as 0.5f, 0.5 .5, 0.f, and floats in scientific notation.

	Our regex for float constants also recognizes integer constants, which is a problem we were able to fix by extracting [0-9] from the integer constant regex as a separate rule and using it to compose the integer constant regex.

3. IDENTIFIERS

	The regex for identifiers was simple enough, we accepted letters and underscore for the first character and then letters, underscores, or digits for additional characters in the identifier. For truncating the identifiers, we just copied the first 30 letters of the identifier and added null terminator for the string. If the id is over the max (1024 characters), we report an error with the truncated string.

	This does not result in a memory error because memcpy considers the size of the dest/src arrays and copies no more than the min of the two.

4. LINE AND COLUMN NUMBERS

5. UNRECOGNIZED CHARACTERS

	For unrecognized characters, we made a capture group that captures any single character not caught by our other rules. Then we reported the unrecognized character error.