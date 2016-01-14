CSE 131 PROJECT 1 (WINTER 2016)

Some parts of the lexer rules are pretty self explanatory (keywords, integer constants, operators, etc), so our README will skip over those explanations and get down to the more complex parts of the project.

1. MULTILINE COMMENTS

2. FLOAT CONSTANTS

3. IDENTIFIERS

4. LINE AND COLUMN NUMBERS
	Keeping track of line and column numbers was rather simple. We utilized yylloc's first_line(initialized = 1), first_column(initialized = 0) and last column (initialized = 0) variables. To do this we needed to utilize the DoBeforeEachAction() function, which sets the first_column = the last column+1, and the last_column = yyleng or the length of the next token. This makes it easy to handle spaces since we can simply do nothing when we get a space token in the rules section. When we have a tab, we will simply move the last_column 7 units. Everytime we encounter a newline character, we will increment the first_line variable and reset both first_column and last_column to 0.