# CSE428S-Lab0

---

## Name: Nick Cochran

### Email: c.nick@wustl.edu


## Errors

I ran into a number of errors while working on this lab.  I had a lot of small syntax issues
that I needed to fix, especially relating to templates, but after short research those were fixed.
I also had a linker error that was much harder to debug and it turned out to be that I was not 
defining my virtual print in the abstract class 'Deck'. This was not explicitely stated so it was
a bit harder to figure out, but I ended up finding a stack overflow post pointing me in the right direction.
I also got confused by the instructions saying to "declare stack variables" as I interpreted that as
the datatype Stack for a while before understanding that is not what it was instructing me to do. 
I think this may be a little too confusing.

## Runs

I had a couple of runs of the program where I wanted to fix up the whitespace and make the printout more detailed, 
and I also was only printing starting at rank 9 for my Hold Em deck, but I realized that was because I had copied
over the code and forgot to change the starting value of the for loop. It ran correctly after that.

## Printing the Cards

It is stated earlier in the instructions to explain how I am printing the decks.
I decided to print each deck by itself with each suit having it's own line.  For Pinochle, this meant adding
an extra line break after the first deck to differentiate the decks.