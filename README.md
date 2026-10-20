# Project 2 · Grade 30 students

**Week 08 · Project 2**  
**Theme:** Change four scores, then report the class  
**Type:** Cumulative mini project (replaces the lab and the homework this week)


## Demo video (required)

Paste a link to a short video of you running this project (tool + code + run).
Work without a working video link is incomplete.

In the video, show the four lines you changed, one run, the five counts, and the office-hours lines.

**Your demo:** https://drive.google.com/file/d/1WI8AAzQKrEmpiawi5BwlpZjRGzLOaPFB/view?usp=sharing 


## What to build

One program grades 30 students. The starter fills the array for you. You change four numbers, then you write two loops.

Leave the random fill alone. It stores a new score from 0 through 99 in every slot. The other 26 scores change every time you run the program. That is expected.

## What you change

In `main.cpp`, change only the number on each of these lines. Any whole number you choose is fine. Do not move the lines. If you insert a line above line 27, these numbers move and the assignment is wrong.

- Line 5, `scoreAt0`, is stored in `scores[0]`
- Line 15, `scoreAt10`, is stored in `scores[10]`
- Line 20, `scoreAt20`, is stored in `scores[20]`
- Line 27, `scoreAt27`, is stored in `scores[27]`

## What you add

Put your name in the file-top comment. Then, after the four stores and before `return 0`:

1. Print each index and `scores[i]`.
2. One `for` loop counts the letters from the scores **after** your four changes.
   - 90 and up is A
   - 80 to 89 is B
   - 70 to 79 is C
   - 60 to 69 is D
   - Below 60 is failing
   - A score of 60 is a D, not failing
   - Print `A:`, `B:`, `C:`, `D:`, and `F:`
   - Those five numbers add up to 30
3. One `while` loop walks the array again. If `scores[i]` is under 60, print `Student at index i needs to come to office hours.` Put `++i` in the loop. Without it, the loop never ends. Do not print a name. Use the index.

The counts will not match a classmate’s run, because `rand` fills the other scores. Your four changed slots must show the numbers you typed.

## Starter

`main.cpp`. The fill is already there. Do not delete `srand` or the `for` loop that calls `rand`.

## Deliverables

1. Course-visible GitHub repository (fork this repo)
2. README with how to compile and run, plus one real run pasted in
3. Short demo video: your tool, the four lines you changed, and a real run
4. Canvas: the repository URL and the video link

## Scope fence

One file. One `main`. No `goto`. No `vector`. No function other than `main`. No files. No pointers.

## Integrity

- AI = tutor, not ghostwriter
- A program you cannot explain is a zero
- Due: Monday night (not Sunday)
- Discussions (every week): first post Friday, replies Sunday
- Late: course policy (−10%/day unless stated otherwise)

## Rubric

Graded on: it runs, the boilerplate is still there, the four lines are changed, the five counts add up to 30, each failing index gets an office-hours line, and the GitHub repo plus demo video are there.

## Getting started

1. Fork this repo on GitHub.
2. Clone your fork.
3. Compile and run:

```bash
g++ -std=c++17 -o program main.cpp && ./program
```

On Windows (Visual Studio), open `main.cpp` and use **Local Windows Debugger**.
4. Record a short demo that shows your tool, your code, and a real run.
5. Paste the video link in the **Demo video** section above.
6. Submit your fork URL on Canvas.
