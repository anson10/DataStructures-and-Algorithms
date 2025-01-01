#include <iostream>
#include <utility> 
#include <vector>
#include<list>
#include<deque>
#include <stack>
#include<queue>
#include<set>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<algorithm>

void _Pair() 
{
    // Simple pair with two integers
    std::pair<int, int> p1 = {5, 10};

    // Nested pair: first is an integer, second is a pair of integers
    std::pair<int, std::pair<int, int>> p2 = {1, {5, 10}};

    // Array of pairs
    std::pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};

    // Accessing elements of the pairs and printing
    std::cout << "p1: " << p1.first << " " << p1.second << "\n"; // Outputs: 5 10
    std::cout << "p2: " << p2.first << " " << p2.second.first << " " << p2.second.second << "\n"; // Outputs: 1 5 10
    std::cout << "arr[1]: " << arr[1].second << "\n"; // Outputs: 4
}

void _Vector()
{
    // Simple vector of integers
    std::vector<int> v;

    // Adding elements to the vector
    v.push_back(1);         // Adds 1 to the vector => v = [1]
    v.emplace_back(2);      // Adds 2 to the vector => v = [1, 2]

    // Vector of pairs
    std::vector<std::pair<int, int>> vec;
    vec.push_back({1, 2});  // Adds the pair (1, 2) to the vector => vec = [(1, 2)]
    vec.emplace_back(3, 4); // Adds the pair (3, 4) to the vector => vec = [(1, 2), (3, 4)]

    // Vector with predefined size and values
    std::vector<int> v2(5, 100); // A vector of size 5, all elements initialized to 100 => v2 = [100, 100, 100, 100, 100]

    // Vector with predefined size, default-initialized (0 for integers)
    std::vector<int> v1(5); // A vector of size 5, all elements initialized to 0 => v1 = [0, 0, 0, 0, 0]

    // Copying one vector into another
    std::vector<int> v3(v1); // Creates a new vector v3 as a copy of v1 => v3 = [0, 0, 0, 0, 0]

    // Iterators
    std::vector<int>::iterator it = v.begin();

    // Increment iterator and access elements
    it++;
    std::cout << "Second element using iterator: " << *(it) << "\n"; // Outputs: 2

    // Move iterator ahead
    it += 1; 
    if (it != v.end())
        std::cout << "Trying to move beyond last element: Invalid iterator operation\n";

    // Reverse iterators
    std::vector<int>::reverse_iterator rit = v.rbegin();
    std::cout << "Last element using reverse iterator: " << *rit << "\n"; // Outputs: 2

    // Accessing elements
    std::cout << "First element using v[0]: " << v[0] << "\n";   // Outputs: 1
    std::cout << "First element using v.at(0): " << v.at(0) << "\n"; // Outputs: 1

    // Back element
    std::cout << "Last element using back(): " << v.back() << "\n"; // Outputs: 2

    // Iterating through the vector
    std::cout << "Vector elements using iterator: ";
    for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        std::cout << *(it) << " "; // Outputs: 1 2
    }
    std::cout << "\n";

    // Using auto keyword for iterator
    std::cout << "Vector elements using auto iterator: ";
    for (auto it = v.begin(); it != v.end(); it++)
    {
        std::cout << *(it) << " "; // Outputs: 1 2
    }
    std::cout << "\n";

    // Range-based for loop
    std::cout << "Vector elements using range-based for loop: ";
    for (auto it : v)
    {
        std::cout << it << " "; // Outputs: 1 2
    }
    std::cout << "\n";

    // Erase elements
    if (v.size() > 1) v.erase(v.begin() + 1); // Erases the second element => v = [1]
    std::cout << "Vector after erasing second element: ";
    for (auto it : v)
    {
        std::cout << it << " "; // Outputs: 1
    }
    std::cout << "\n";

    // Inserting elements
    v.insert(v.begin(), 300); // Inserts 300 at the beginning => v = [300, 1]
    v.insert(v.begin() + 1, 2, 10); // Inserts two 10s starting at position 1 => v = [300, 10, 10, 1]
    std::cout << "Vector after insertions: ";
    for (auto it : v)
    {
        std::cout << it << " "; // Outputs: 300 10 10 1
    }
    std::cout << "\n";

    // Inserting a copy of another vector
    std::vector<int> copy(2, 50); // A vector with two 50s => copy = [50, 50]
    v.insert(v.begin(), copy.begin(), copy.end()); // Inserts all elements of copy at the beginning => v = [50, 50, 300, 10, 10, 1]
    std::cout << "Vector after inserting another vector: ";
    for (auto it : v)
    {
        std::cout << it << " "; // Outputs: 50 50 300 10 10 1
    }
    std::cout << "\n";

    // Vector size
    std::cout << "Current size of the vector: " << v.size() << "\n"; // Outputs: 6

    // Removing the last element
    if (!v.empty()) v.pop_back(); // Removes the last element => v = [50, 50, 300, 10, 10]
    std::cout << "Vector after pop_back: ";
    for (auto it : v)
    {
        std::cout << it << " "; // Outputs: 50 50 300 10 10
    }
    std::cout << "\n";

    // Swapping vectors
    v1.swap(v2); // Swaps the contents of v1 and v2
    std::cout << "Vector v1 after swap (was v2): ";
    for (auto it : v1)
    {
        std::cout << it << " "; // Outputs: 100 100 100 100 100
    }
    std::cout << "\n";

    // Clearing a vector
    v.clear(); // Empties the vector => v = []
    std::cout << "Vector v after clear: " << v.size() << " elements\n"; // Outputs: 0 elements

    // Checking if a vector is empty
    std::cout << "Is v1 empty? " << (v1.empty() ? "Yes" : "No") << "\n"; // Outputs: No
}

void _List()
{
    // Create an empty list of integers
    std::list<int> ls;

    // Add elements to the back of the list
    ls.push_back(1);        // Adds 1 at the end => ls = [1]
    ls.emplace_back(2);     // Adds 2 at the end => ls = [1, 2]

    // Add elements to the front of the list
    ls.push_front(0);       // Adds 0 at the front => ls = [0, 1, 2]
    ls.emplace_front(-1);   // Adds -1 at the front => ls = [-1, 0, 1, 2]

    // Print the elements of the list
    std::cout << "Elements in the list: ";
    for (auto it : ls) {
        std::cout << it << " ";  // Outputs: -1 0 1 2
    }
    std::cout << std::endl;

    // Check the size of the list
    std::cout << "Size of the list: " << ls.size() << std::endl;

    // Accessing the front and back elements
    std::cout << "First element: " << ls.front() << std::endl;  // Outputs: -1
    std::cout << "Last element: " << ls.back() << std::endl;    // Outputs: 2
}

void _Deque()
{
    // Create an empty deque of integers
    std::deque<int> dq;

    // Add elements to the back of the deque
    dq.push_back(1);        // Adds 1 at the end => dq = [1]
    dq.emplace_back(2);     // Constructs and adds 2 at the end => dq = [1, 2]

    // Add elements to the front of the deque
    dq.push_front(0);       // Adds 0 at the front => dq = [0, 1, 2]
    dq.emplace_front(-1);   // Constructs and adds -1 at the front => dq = [-1, 0, 1, 2]

    // Print the elements of the deque
    std::cout << "Elements in the deque: ";
    for (auto it : dq) {
        std::cout << it << " ";  // Outputs: -1 0 1 2
    }
    std::cout << std::endl;

    // Check the size of the deque
    std::cout << "Size of the deque: " << dq.size() << std::endl;

    // Accessing the front and back elements
    std::cout << "First element: " << dq.front() << std::endl;  // Outputs: -1
    std::cout << "Last element: " << dq.back() << std::endl;    // Outputs: 2

    // Remove elements from the front and back
    dq.pop_front();          // Removes the first element => dq = [0, 1, 2]
    dq.pop_back();           // Removes the last element => dq = [0, 1]

    // Print the elements of the deque after popping
    std::cout << "Elements in the deque after popping: ";
    for (auto it : dq) {
        std::cout << it << " ";  // Outputs: 0 1
    }
    std::cout << std::endl;
}

void _Stack() 
{
    // LIFO - Last In First Out: The last element added to the stack is the first one to be removed.
    // Think of it as a stack of plates where the last plate placed on top is the first one taken off.

    std::stack<int> s;   // Create an empty stack of integers

    // Pushing elements onto the stack (the order of push is 1, 2, 3, 4, 5)
    s.push(1);  // Adds 1 to the top of the stack
    s.push(2);  // Adds 2 to the top of the stack
    s.push(3);  // Adds 3 to the top of the stack
    s.push(4);  // Adds 4 to the top of the stack
    s.push(5);  // Adds 5 to the top of the stack

    s.emplace(0); // Directly constructs the element 0 in the stack, which is pushed at the top (more efficient than push)

    // Print the element at the top of the stack (which is 0, as it was pushed last)
    std::cout << s.top() <<"\n";  // Outputs: 0

    // Pop the top element (removes 0 from the stack)
    s.pop();  // Removes the top element, which was 0

    // After popping, the new top is 5, print it
    std::cout << s.top() <<"\n";  // Outputs: 5

    // Print the current size of the stack (how many elements are in the stack)
    std::cout << s.size() <<"\n";  // Outputs: 4 (since 0 was popped)

    // Check if the stack is empty (Returns true if the stack is empty, otherwise false)
    std::cout << s.empty() <<"\n";  // Outputs: 0 (false, because there are still elements in the stack)

    // Create two more empty stacks, s1 and s2
    std::stack<int> s1, s2;

    // Swap the contents of s1 and s2
    s1.swap(s2);  // Swaps the elements of s1 and s2. Since both are empty, they remain empty after the swap.
}

void _Queue() 
{
    // FIFO - First In First Out: The first element added to the queue is the first one to be removed.
    // Think of it like a line at a ticket counter where the first person in line is the first one served.

    std::queue<int> q;   // Create an empty queue of integers

    // Adding elements to the queue (the order of insertion is 1, 2, 3, 4, 5)
    q.push(1);  // Adds 1 to the back of the queue
    q.push(2);  // Adds 2 to the back of the queue
    q.push(3);  // Adds 3 to the back of the queue
    q.push(4);  // Adds 4 to the back of the queue
    q.push(5);  // Adds 5 to the back of the queue

    // Print the front element of the queue (which is 1, as it was added first)
    std::cout << "Front element: " << q.front() << std::endl;  // Outputs: 1

    // Remove the front element (removes 1 from the queue)
    q.pop();  // Removes the front element, which was 1

    // After popping, the new front is 2, print it
    std::cout << "Front element after pop: " << q.front() << std::endl;  // Outputs: 2

    // Print the current size of the queue (how many elements are in the queue)
    std::cout << "Size of queue: " << q.size() << std::endl;  // Outputs: 4 (since 1 was popped)

    // Check if the queue is empty (Returns true if the queue is empty, otherwise false)
    std::cout << "Is the queue empty? " << q.empty() << std::endl;  // Outputs: 0 (false, because there are still elements in the queue)
}

void _PriorityQueue()
{
    // Max Heap (default behavior): The element with the highest priority (largest value) is at the top
    std::priority_queue<int> pq;

    // Pushing elements to the priority queue
    pq.push(1);  // Adds 1 to the priority queue
    pq.push(2);  // Adds 2 to the priority queue
    pq.push(3);  // Adds 3 to the priority queue
    pq.push(4);  // Adds 4 to the priority queue
    pq.emplace(10); // Constructs the integer 10 directly in the priority queue

    // Print the top element of the priority queue (which is 10 in a max heap)
    std::cout << "Top: " << pq.top() << "\n";  // Outputs: 10

    // Pop the top element (removes 10 from the priority queue)
    pq.pop();

    // Print the new top element after popping (which is 4)
    std::cout << "Popped element: " << pq.top() << "\n";  // Outputs: 4

    // Minimum Heap: The element with the lowest priority (smallest value) is at the top
    std::priority_queue<int, std::vector<int>, std::greater<int>> pq1;

    // Pushing elements to the min-heap priority queue
    pq1.push(2);  // Adds 2 to the priority queue
    pq1.push(4);  // Adds 4 to the priority queue
    pq1.push(6);  // Adds 6 to the priority queue
    pq1.emplace(8); // Constructs the integer 8 directly in the priority queue

    // Print the top element of the min-heap priority queue (which is 2)
    std::cout << "Top: " << pq1.top() << "\n";  // Outputs: 2
}

void _Set() 
{
    // Create a set of integers
    std::set<int> s;

    // Insert elements into the set
    s.insert(1);  // Inserts 1 into the set (set will automatically sort and remove duplicates)
    s.insert(2);  // Inserts 2
    s.emplace(3); // Constructs 3 in place and adds it
    s.insert(4);  // Inserts 4
    s.insert(5);  // Inserts 5
    s.insert(1);  // Attempts to insert 1 again, but sets do not allow duplicates

    // Find an element in the set (returns an iterator to the element if found)
    auto it = s.find(3);  // Finds the element 3

    // Erase an element from the set (removes the element 5)
    s.erase(5);  // Removes 5 from the set

    // Count the occurrences of an element (sets do not allow duplicates, so it returns 1 if found)
    int count = s.count(1);  // Will return 1 because 1 exists in the set

    // Find an element and erase it using an iterator
    it = s.find(3);  // Finds the element 3
    s.erase(it);     // Removes 3 from the set using its iterator

    // Erase elements from a range [it1, it2)
    auto it1 = s.find(2);  // Finds the element 2
    auto it2 = s.find(4);  // Finds the element 4
    s.erase(it1, it2);     // Erases elements in the range [it1, it2) which are 2 and 3

    // Lower bound: returns an iterator to the first element that is not less than the given value
    auto it3 = s.lower_bound(2);  // Finds the first element that is >= 2 (returns an iterator to 2)
    
    // Upper bound: returns an iterator to the first element that is greater than the given value
    auto it4 = s.upper_bound(3);  // Finds the first element that is > 3 (returns an iterator to 4)

    // Printing the current state of the set
    std::cout << "Set elements after operations: ";
    for (const auto& elem : s) {
        std::cout << elem << " ";  // Outputs the elements in the set
    }
    std::cout << std::endl;
}

void _MultiSet() 
{
    // A multiset allows duplicate values and maintains elements in sorted order.
    std::multiset<int> ms;

    // Insert multiple occurrences of the same value.
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    // Print all elements in the multiset.
    std::cout << "Elements in the multiset: ";
    for (auto it : ms) {
        std::cout << it << " ";
    }
    std::cout << "\n";

    // Erase all occurrences of the value 1.
    ms.erase(1);
    std::cout << "After erasing all occurrences of 1, size: " << ms.size() << "\n";

    // Reinsert elements to demonstrate further operations.
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    // Count the number of occurrences of 1.
    int count = ms.count(1);
    std::cout << "Count of 1: " << count << "\n";

    // Erase only one occurrence of 1 using find().
    auto it = ms.find(1);
    if (it != ms.end()) {
        ms.erase(it);
    }
    std::cout << "After erasing one occurrence of 1: ";
    for (auto it : ms) {
        std::cout << it << " ";
    }
    std::cout << "\n";

    // Erase a range of elements.
    ms.insert(2);
    ms.insert(2);
    auto it_start = ms.find(1); // Iterator pointing to the first occurrence of 1
    auto it_end = ms.find(2);   // Iterator pointing to the first occurrence of 2
    if (it_start != ms.end() && it_end != ms.end()) {
        ms.erase(it_start, it_end); // Erase elements from [1, 2)
    }
    std::cout << "After erasing range [1, 2): ";
    for (auto it : ms) {
        std::cout << it << " ";
    }
    std::cout << "\n";
}

void _UnOrderedSet()
{
    // An unordered set is a container that stores unique elements in no particular order.
    // It provides average O(1) time complexity for insertions, deletions, and lookups.

    std::unordered_set<int> us;

    // Insert elements into the unordered set.
    us.insert(10);
    us.insert(20);
    us.insert(30);
    us.insert(10); // Duplicate, will not be added as unordered_set stores only unique elements.

    // Display the elements in the unordered set.
    std::cout << "Elements in the unordered set: ";
    for (auto it : us) {
        std::cout << it << " ";
    }
    std::cout << "\n";

    // Check if an element exists in the unordered set.
    if (us.find(20) != us.end()) {
        std::cout << "20 is found in the unordered set.\n";
    } else {
        std::cout << "20 is not found in the unordered set.\n";
    }

    // Erase a specific element.
    us.erase(20); // Removes the element 20.
    std::cout << "After erasing 20, elements: ";
    for (auto it : us) {
        std::cout << it << " ";
    }
    std::cout << "\n";

    // Attempt to erase an element that does not exist.
    if (us.erase(40)) {
        std::cout << "40 was erased from the unordered set.\n";
    } else {
        std::cout << "40 was not found in the unordered set.\n";
    }

    // Insert more elements to demonstrate unordered nature.
    us.insert(50);
    us.insert(60);

    // Display the elements again.
    std::cout << "Final elements in the unordered set: ";
    for (auto it : us) {
        std::cout << it << " ";
    }
    std::cout << "\n";
}

void _Map() 
{
    // Map stores key-value pairs in sorted order of keys. Keys are unique.
    std::map<int, int> mpp; // Simple map with integer keys and integer values

    // Adding elements to the map
    mpp[1] = 2;                 // Key 1 maps to value 2
    mpp[2] = 4;                 // Key 2 maps to value 4
    mpp.insert({3, 1});         // Key 3 maps to value 1 using insert
    mpp.emplace(4, 5);          // Key 4 maps to value 5 using emplace (efficient insertion)

    // Accessing and modifying map elements
    mpp[5] = 10;                // Adds key 5 with value 10 (or updates if already present)
    mpp[2] = 6;                 // Updates the value for key 2 to 6

    // Map with pair as key
    std::map<std::pair<int, int>, int> pairMap;
    pairMap[{2, 3}] = 10;       // Adds a pair (2, 3) as the key, mapping to value 10

    // Iterating through the map
    std::cout << "Key-Value Pairs in Map:\n";
    for (auto it : mpp) {
        std::cout << "Key: " << it.first << ", Value: " << it.second << "\n";
    }

    // Accessing specific elements
    std::cout << "Value for key 1: " << mpp[1] << "\n";

    // Accessing a non-existent key creates it with default value (0 for integers)
    std::cout << "Value for non-existent key 6: " << mpp[6] << "\n";

    // Displaying elements in the pairMap
    std::cout << "Pair as key in pairMap:\n";
    for (auto it : pairMap) {
        std::cout << "Key: (" << it.first.first << ", " << it.first.second << "), Value: " << it.second << "\n";
    }
}

void _MultiMap() 
{
    // Multimap: Allows duplicate keys, unlike `std::map`.
    // Keys are sorted in ascending order by default.

    std::multimap<int, int> mmp;

    // Inserting elements
    mmp.insert({1, 2});  // Adds key 1 with value 2
    mmp.insert({1, 3});  // Adds another pair with key 1 and value 3
    mmp.insert({2, 4});  // Adds key 2 with value 4
    mmp.insert({3, 5});  // Adds key 3 with value 5

    // Adding using emplace
    mmp.emplace(3, 6);   // Adds key 3 with value 6

    // Iterating over all elements
    std::cout << "Elements in MultiMap:\n";
    for (auto it : mmp) {
        std::cout << "Key: " << it.first << ", Value: " << it.second << "\n";
    }

    // Counting occurrences of a key
    int count = mmp.count(1); // Counts all entries with key 1
    std::cout << "Count of key 1: " << count << "\n";

    // Finding all values for a key
    auto range = mmp.equal_range(1); // Returns iterators for the range of key 1
    std::cout << "Values for key 1:\n";
    for (auto it = range.first; it != range.second; ++it) {
        std::cout << it->second << "\n";
    }

    // Erasing elements
    mmp.erase(2); // Removes all pairs with key 2
    std::cout << "After erasing key 2:\n";
    for (auto it : mmp) {
        std::cout << "Key: " << it.first << ", Value: " << it.second << "\n";
    }

    // Erasing using iterator
    auto it = mmp.find(3); // Finds the first occurrence of key 3
    if (it != mmp.end()) {
        mmp.erase(it); // Erases the first occurrence of key 3
    }
    std::cout << "After erasing one occurrence of key 3:\n";
    for (auto it : mmp) {
        std::cout << "Key: " << it.first << ", Value: " << it.second << "\n";
    }
}

void _UnOrderedMap() 
{
    // Unordered Map: Key-value pairs with O(1) average time complexity for insert, find, and erase.
    // The order of elements is not guaranteed.

    std::unordered_map<int, int> umap;

    // Inserting elements
    umap[1] = 2;             // Adds key 1 with value 2
    umap[2] = 4;             // Adds key 2 with value 4
    umap.emplace(3, 6);      // Adds key 3 with value 6
    umap.insert({4, 8});     // Adds key 4 with value 8

    // Accessing elements
    std::cout << "Value at key 1: " << umap[1] << "\n";
    std::cout << "Value at key 3: " << umap[3] << "\n";

    // Iterating over the unordered map
    std::cout << "Elements in Unordered Map:\n";
    for (auto it : umap) {
        std::cout << "Key: " << it.first << ", Value: " << it.second << "\n";
    }

    // Checking the existence of a key
    if (umap.find(2) != umap.end()) {
        std::cout << "Key 2 found with value: " << umap[2] << "\n";
    } else {
        std::cout << "Key 2 not found.\n";
    }

    // Erasing elements
    umap.erase(2); // Removes the pair with key 2
    std::cout << "After erasing key 2:\n";
    for (auto it : umap) {
        std::cout << "Key: " << it.first << ", Value: " << it.second << "\n";
    }

    // Checking the size of the unordered map
    std::cout << "Size of Unordered Map: " << umap.size() << "\n";

    // Clearing the unordered map
    umap.clear();
    std::cout << "After clearing, size of Unordered Map: " << umap.size() << "\n";
}

void _STL_Utilities() {
    // __builtin_popcount(): Counts the number of set bits (1s) in the binary representation of an integer.
    int num = 29; // Binary: 11101 (4 set bits)
    std::cout << "__builtin_popcount(" << num << "): " << __builtin_popcount(num) << "\n";

    // Vector to demonstrate min_element() and max_element()
    std::vector<int> vec = {10, 20, 5, 30, 15};

    // min_element(): Finds the smallest element in a range.
    // Returns an iterator pointing to the minimum element.
    auto minIt = std::min_element(vec.begin(), vec.end());
    std::cout << "Minimum element in the vector: " << *minIt << "\n";

    // max_element(): Finds the largest element in a range.
    // Returns an iterator pointing to the maximum element.
    auto maxIt = std::max_element(vec.begin(), vec.end());
    std::cout << "Maximum element in the vector: " << *maxIt << "\n";

    // Additional: Finding positions of min and max elements
    int minPos = std::distance(vec.begin(), minIt); // Position of min element
    int maxPos = std::distance(vec.begin(), maxIt); // Position of max element
    std::cout << "Position of minimum element: " << minPos << "\n";
    std::cout << "Position of maximum element: " << maxPos << "\n";
}

int main() 
{
    std::cout<<"PAIR" << std::endl;
    _Pair();

    std::cout<<"_____________________________________" << std::endl;

    std::cout<<"VECTOR" << std::endl;
    _Vector();

    std::cout<<"_____________________________________" << std::endl;

    std::cout<<"LIST" << std::endl;
    _List();

    std::cout<<"_____________________________________" << std::endl;

    std::cout<<"DEQUE" << std::endl;
    _Deque();

    std::cout<<"_____________________________________" << std::endl;

    std::cout<<"STACK" << std::endl;
    _Stack();

    std::cout<<"_____________________________________" << std::endl;

    std::cout<<"QUEUE" << std::endl;
    _Queue();

    std::cout<<"_____________________________________" << std::endl;

    std::cout<<"PRIORITY QUEUE" << std::endl;
    _PriorityQueue();

    std::cout<<"_____________________________________" << std::endl;

    std::cout<<"SET" << std::endl;
    _Set();

    std::cout<<"_____________________________________" << std::endl;

    std::cout<<"MULTI SET" << std::endl;
    _MultiSet();

    std::cout<<"_____________________________________" << std::endl;

    std::cout<<"UNORDERED SET" << std::endl;
    _UnOrderedSet();

    std::cout<<"_____________________________________" << std::endl;

    std::cout<<"MAP" << std::endl;
    _Map();

    std::cout<<"_____________________________________" << std::endl;

    std::cout<<"MULTI MAP" << std::endl;
    _MultiMap();

    std::cout<<"_____________________________________" << std::endl;

    std::cout<<"UNORDERED MAP" << std::endl;
    _UnOrderedMap();

    std::cout<<"_____________________________________" << std::endl;

    std::cout<<"STL UTILITIES" << std::endl;
    _STL_Utilities();
    
    return 0;
}