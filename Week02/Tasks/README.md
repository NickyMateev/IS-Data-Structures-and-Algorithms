# Week 02 - Tasks

## Algorithm complexity

### Task 1:

What's the complexity of the following algorithm for checking if a number is prime?

```
is_prime(number) {
  for (i = 2; i < number; i++) {
    if (number % i == 0) {
      return false
    }
  }
  return true
}
```

### Task 2:

What's the complexity of the following algrorithm for checking if a string is a [palindrome][1]?

```
is_palindrome(string) {
  n = length(string)

  i = 0
  j = n - 1
  while (i < j) {
    if (string[i] != string[j]) {
      return false
    }
    i = i + 1
    j = j - 1
  }

  return true
}
```

### Task 3:

What's the complexity of the following algorithm for summing the elements of a matrix?

```
sum = 0
for (i = 0; i < n; i++) {
  for (j = 0; j < m; j++) {
    sum += numbers[i][j]
  }
}
```

### Task 4:

What's the complexity of the following algorithm:


```
count = 0
for (i = 0; i < n; i++) {
  for (j = i; j < n; j++) {
    count++
  }
}
```

### Task 5:

What's the complexity of the following algorithm:

```
for (i = 0; i < n; i++) {
  for (j = 1; j < n; j*=2) {
    count++
  }
}
```


[1]: https://www.quora.com/What-are-examples-of-palindromes