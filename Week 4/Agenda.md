# Week 4 - Loops!!! Loops!!! Loops!!! Loops!!! Lo...

## Pairs
---

Give `1511 pair` a run

## Assignment 0
---

Due: `Sunday 27th August 11:59:59pm (end of Week 5)`

Tips: Do examples on pen and paper. Draw diagrams. Don’t be in a rush to start typing.

Task: get the timezone in Australia Or New Zealand by adjusting UTC

https://www.timeanddate.com/time/map/

Tests: you gotta write some tests and contribute

## Function Review
---

find the bugs!

## Loops
---

look at loop.c

## Code Review - Sort 3 Numbers - Zhuowei G + Liam P + Xiuyi Z
---

`fun!`

Remember to blog about this! it's a good way to revise. 

## Types and memory
---

look at types.c

| type      | size      | min       | max       |
| --------- | --------- | --------- | --------- |
| char      |           |           |           |
| short     |           |           |           |
| int       |           |           |           |
| long      |           |           |           |
| long long |           |           |           |
| float     |           |           |           |
| double    |           |           |           |

#### 2's Complement / sign

0000 = $(0\times2^3)+(0\times2^2)+(0\times2^1)+(0\times2^0)=0$

0010 = $(0\times2^3)+(0\times2^2)+(1\times2^1)+(0\times2^0)=2$

0100 = $(0\times2^3)+(1\times2^2)+(0\times2^1)+(0\times2^0)=4$

0101 = $(0\times2^3)+(1\times2^2)+(0\times2^1)+(1\times2^0)=5$

1111 = $(1\times2^3)+(1\times2^2)+(1\times2^1)+(1\times2^0)=15$

Now here we can only represent 16 unique values (remember that 0 is it's own value) so what if we wanted to include negative numbers?
we can a scale as such
```
-8 -7 -6 -5 -4 -3 -2 -1 0 1 2 3 4 5 6 7
```

The fact it's 1 off in the negative direction is annoying but what can you do

So to represent these numbers we can use Two's complement where we reserve the first bit to be the sign bit. as such any number with the Left Most Bit being 1 is negative. 

0000 = 0
0010 = 2
1110 = -2

That is to say

1000 1001 1010 1011 1100 1101 1110 1111 0000 0001 0010 0011 0100 0101 0110 0111

This has the nice property that if you take any number, flip it's bits and add 1 we get it's negative value. 

1111 = -1
flip = 0000
add one = 0001

#### IEEE_754

We represent floating point numbers with 3 peices of info
- the sign
- the significant
- the exponent

a 32 bit floating point number looks like this
S EEEEEEEE 1NNNNNNNNNNNNNNNNNNNNNNN

S is the sign, E is the exponent and N is the number
the first number in N is always 1, bare with me on why. 

If we have a number, 20.6 we first convert both left and right sides to binary
20.6 = 10100.110

We then shift the decimal place untill it's 1.NNNNNN x 2^E
1.0100110 × 2^4

We then pretend like the decimal point isn't there. We know where it is, it's always 1 after the first digit. We enforce this. (hence why it's 1NNNNN)
Now we put that number in as N, and take the E and the sign. 

20.6 -> 0 00000100 0100110

E is some number from -127 to 126 to represent very small and very large numbers. there is no sign bit here just whatever number is read in (0-255) is subtracted from 127. the 127 is called bias.

## Assign group for code review
---

The code review for next week will be `Danish Flag`.

We still have the amazing `choose.c` program if needed. 

