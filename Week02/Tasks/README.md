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

### Task 6:

What's the complexity of the following algorithm:

```csharp
bool IsFirstElementNull(IList<string> elements)
{
    return elements[0] == null;
}
```

### Task 7:

What's the complexity of the following algorithm:

```csharp
bool ContainsValue(IList<string> elements, string value)
{
    foreach (var element in elements)
    {
        if (element == value) return true;
    }

    return false;
}

```

### Task 8:

What's the complexity of the following algorithm:

```csharp
bool ContainsDuplicates(IList<string> elements)
{
    for (var outer = 0; outer < elements.Count; outer++)
    {
        for (var inner = 0; inner < elements.Count; inner++)
        {
            // Don't compare with self
            if (outer == inner) continue;

            if (elements[outer] == elements[inner]) return true;
        }
    }

    return false;
}

```

### Task 9:

What's the complexity of the following algorithm:

```csharp
int Fibonacci(int number)
{
    if (number <= 1) {
        return number;
    }

    return Fibonacci(number - 2) + Fibonacci(number - 1);
}

```

### Task 10:

What's the complexity of the following algorithm:

```csharp
int pairsWithSumXNaive() {
    int ans = 0;
    for (int i = 0; i < N; i++)
        for (int c = i + 1; c < N; c++)
            if (a[i] + a[c] == X) ans++;
    return ans;
}
```

### Task 11:

What's the complexity of the following algorithm:

```c++
void func(int* a, int n)
{
    int i, t, s = 1;
    while (s)
    {
        s = 0;
        for (i = 1; i < n; i++)
	      {
            if (a[i] < a[i - 1])
            {
                t = a[i];
                a[i] = a[i - 1];
                a[i - 1] = t;
                s = 1;
            }
        }
    }
}

```

> Can the same result be achieved using a different more efficient algorithm? Propose different solutions.


### Task 12:

What's the complexity of the following algorithm:

```c++
bool func(int *arr, int n, int elem)
{
	  for (i = 0; i < n; i++)
	  {
           if (arr[i] == elem) {
                return true;
           }
    }
	
	return false;
}

```
> NOTE: Here **arr** is a sorted array.

> Can the same result be achieved using a different more efficient algorithm? Propose different solutions. ([**Binary Search**][1])

### Task 13:

Given *n* different whole numbers *a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>n</sub> (1 <= a<sub>i</sub> <= 100, 000, 000>)* sorted in ascending order, find the number of pairs throughout those numbers whose sum is equal to *x*. Implement an algorithm with a complexity faster than **O(n<sup>2</sup>)** with regards to the number of elements.


[1]: https://www.youtube.com/watch?v=JQhciTuD3E8