# Hackerrank-Solution-Linux-Shell

## 1. Write a bash script which does just one thing: saying "HELLO". **Input Format**: There is no input file required for this problem.

```md 
echo HELLO
```

## 2. Your task is to use for loops to display only odd natural numbers from 1 to 99. Input Format: There is no input.

```md
#!/bin/bash
X=1
while [ $X -le 99 ]
do
    echo $X
    X=$((X+2))
done
```
