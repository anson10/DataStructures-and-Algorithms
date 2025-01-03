
# Euclidean Algorithm for GCD (Greatest Common Divisor)
The Euclidean algorithm is an efficient method for finding the greatest common divisor (GCD) of two numbers.

$$
\text{gcd}(a, b) = \text{gcd}(a - b, b) \quad \text{if} \quad a > b
$$

This is an alternative way of expressing the Euclidean algorithm. The basic idea remains the same, which is to reduce the problem of finding the GCD by subtracting one number from the other. 

### Explanation:

In the **subtraction form** of the Euclidean algorithm, instead of dividing, you subtract the smaller number `b` from the larger number `a` repeatedly. This reduces the problem in a similar way.

### Steps:

1. If $a > b$, replace $ a $ with $ a - b $.
2. Repeat the process until $ a = b $, at which point $a $ or $ b $ will be the GCD.

This method works because the GCD of two numbers does not change if we subtract the smaller number from the larger one, i.e., it preserves the common divisors.

#### Example: GCD of 252 and 105 (Subtraction method)

1. Start with $a = 252$ and $b = 105$.
   
   Since $a$ > $b$, subtract $b$ from $a$:
   $$
   252 - 105 = 147
   $$
   Now, $a = 147$, $b = 105$.

2. Again, $a$ > $b$, so subtract $b$ from $a$:
   $$
   147 - 105 = 42
   $$
   Now, $a = 42$, $b = 105$.

3. Now, $b > a$, so subtract $a$ from $b$:
   $$
   105 - 42 = 63
   $$
   Now, $a = 42$, $b = 63$.

4. Since $b > a$, subtract $a$ from $b$:
   $$
   63 - 42 = 21
   $$
   Now, $a = 42$, $b = 21$.

5. Finally, subtract $b$ from $a$:
   $$
   42 - 21 = 21
   $$
   Now, $a = b = 21$.

6. Since $a = b$, the algorithm terminates, and the GCD is $21$.

### Time Complexity:

The subtraction method can take more steps compared to the division method (as the numbers decrease more slowly), but in the worst case, the time complexity is still $O(\log(\min(a, b)))$.

#### Visualization (Subtraction Method):

```
Step 1: 252 - 105 = 147
Step 2: 147 - 105 = 42
Step 3: 105 - 42 = 63
Step 4: 63 - 42 = 21
Step 5: 42 - 21 = 21
Result: GCD = 21
```

### Conclusion:

Both **division** and **subtraction** methods are valid and equivalent in computing the GCD. The **division method** is generally more efficient because it reduces the numbers faster. However, the subtraction method is conceptually simpler and may be useful for understanding the algorithm's fundamental behavior.