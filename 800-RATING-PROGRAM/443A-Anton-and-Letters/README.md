Codeforces 443A — Anton and Letters

Problem

We are given a string containing lowercase English letters, commas, spaces, and curly brackets.

We need to find the number of distinct lowercase letters present in the string.

For example:

{a, b, c, a}

The distinct letters are:

a, b, c

So the answer is:

3

Approach

I used a set<char> to store the lowercase letters found in the string.

Step 1: Take the Input

I use:

getline(cin, str);

instead of cin >> str because the input contains spaces.

cin >> str would stop reading when it encounters a space, while getline() reads the complete line.

Step 2: Check Every Character

I loop through every character of the string:

for(int i = 0; i < str.length(); i++)

For every character, I check whether it is a lowercase English letter:

if(str[i] >= 97 && str[i] <= 122)

Here:

97 is the ASCII value of 'a'

122 is the ASCII value of 'z'

If it is a lowercase letter, I insert it into the set:

s.insert(str[i]);

Step 3: Why Use a Set?

A set stores only unique elements.

For example, if the input is:

{a, b, a, c, b}

while processing:

a → {a}
b → {a, b}
a → {a, b}       // duplicate ignored
c → {a, b, c}
b → {a, b, c}    // duplicate ignored

Finally:

{a, b, c}

Therefore:

s.size()

gives the number of distinct letters.

Step 4: Print the Answer

Finally:

int len = s.size();
cout << len;

Example

Input

{a, b, c, a, b}

Set After Processing

{a, b, c}

Output

3

Complexity

Time: O(n log 26), which is effectively O(n), where n is the length of the string.

Space: O(26) because there can be at most 26 lowercase English letters.

Key Learning

This problem helped me understand how a set can be used to remove duplicates automatically.

Instead of manually checking whether a character has already appeared, I can simply use:

s.insert(str[i]);

and the set takes care of duplicates.