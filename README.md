The [Collatz conjecture](https://en.wikipedia.org/wiki/Collatz_conjecture) is a famous unsolved problem in mathematics concerning the function
```math
f(n) = \begin{cases} n / 2 & n \text{ is even} \\ 3n + 1 & n \text{ is odd} \end{cases}
```
In particular, will successively applying $f$ always eventually reach $1$ for any $n$? A natural concept that arises when attempting to answer this question are *chains*. For example,
```math
3 \to 10 \to 5 \to 16 \to 8 \to 4 \to 2 \to 1
```
This repository contains code to automatically generate graphs of Collatz chains. For example usage, first run

> make

to build the binary, followed by

> ./collatz 300

to compute chains for the positive integers up to 300, and save a visual representation as `collatz.svg`.