1) Оценете сложността на алгоритъма:
```
bool IsFirstElementNull(IList<string> elements)
{
    return elements[0] == null;
}


bool ContainsValue(IList<string> elements, string value)
{
    foreach (var element in elements)
    {
        if (element == value) return true;
    }

    return false;
}


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


int Fibonacci(int number)
{
    if (number <= 1) return number;

    return Fibonacci(number - 2) + Fibonacci(number - 1);
}


int pairsWithSumXNaive() {
    int ans = 0;
    for (int i = 0; i < N; i++)
        for (int c = i + 1; c < N; c++)
            if (a[i] + a[c] == X) ans++;
    return ans;
}
```

2)

![task-diagram][diagram]

[diagram]: ../images/onlineShope.JPG
