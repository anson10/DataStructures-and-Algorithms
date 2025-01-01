# C++ STL Cheat Sheet

This repository provides a concise overview of commonly used C++ Standard Template Library (STL) components. Below is an explanation of key concepts and utilities in STL, including their use cases and characteristics.

---

## Pair
- Combines two values into one entity.
- Useful for representing key-value pairs.

**Visualization:**  
`(Key, Value)` → Example: `(1, "Apple")`

---

## Vector
- Dynamic array with contiguous memory.
- Supports fast random access and efficient insertion/deletion at the end.

### Characteristics:
- Index-based access: ✅  
- Best use: When frequent additions occur at the end.

---

## List
- Doubly linked list with scattered memory storage.
- Efficient insertion and deletion at arbitrary positions.

### Characteristics:
- Index-based access: ❌  
- Best use: When frequent insertions and deletions are required at arbitrary positions.

---

## Deque
- Double-ended queue supporting fast operations at both ends.
- Combines features of vectors and lists.

**Visualization:**  
`| Front | Data | Back |`

### Characteristics:
- Index-based access: ✅  
- Best use: When operations at both ends are frequent.

---

## Stack
- LIFO (Last In, First Out) data structure.
- Allows operations only at the top.

**Visualization:**  
```
| 5 | <- Top  
| 4 |  
| 3 |  
```

### Characteristics:
- Access: Only the top element is accessible.  
- Best use: Backtracking, undo operations.

---

## Queue
- FIFO (First In, First Out) data structure.
- Allows operations only at the front and back.

**Visualization:**  
`| Front -> [1, 2, 3, 4] <- Back |`

### Characteristics:
- Access: Only the front element is accessible.  
- Best use: Task scheduling, BFS traversal.

---

## Priority Queue
- A queue where elements are sorted by priority.
- Default: Max-Heap (largest element at the top).
- Can be configured as Min-Heap using `std::greater<int>`.

**Visualization:**  
```
Max-Heap: Top -> [10, 4, 3, 2]  
Min-Heap: Top -> [2, 3, 4, 10]
```

### Characteristics:
- Access: Top element has the highest priority.  
- Best use: Dijkstra's algorithm, sorting tasks by importance.

---

## Set
- Stores unique elements in sorted order.
- Efficient search, insertion, and deletion.

**Visualization:**  
`Set: {1, 3, 5, 7}`  

- **Lower Bound (4):** First element ≥ 4 → `5`  
- **Upper Bound (4):** First element > 4 → `5`

### Characteristics:
- Duplicates: ❌  
- Best use: Maintaining sorted and unique collections.

---

## Map
- Key-value pairs stored in sorted order by keys.
- Keys must be unique.

**Visualization:**  
`Map: {1: "A", 2: "B", 3: "C"}`

### Characteristics:
- Duplicates: Keys ❌, Values ✅  
- Best use: Associative arrays, dictionary-like operations.

---

## Unordered Containers
- Stores elements without any specific order.
- Faster operations than ordered containers due to hash-based storage.

### Examples:
- **Unordered Set:** Unique elements, unsorted.  
- **Unordered Map:** Key-value pairs, unsorted.

---

## Utilities
### `__builtin_popcount()`
- Returns the count of set bits (1s) in an integer.

**Example:**  
`__builtin_popcount(5)` → Binary: `101`, Result: `2`

### `min_element()` and `max_element()`
- Finds the smallest or largest element in a range.

**Example:**  
For `v = {3, 1, 4, 1, 5}`,  
- `min_element(v.begin(), v.end())` → `1`  
- `max_element(v.begin(), v.end())` → `5`