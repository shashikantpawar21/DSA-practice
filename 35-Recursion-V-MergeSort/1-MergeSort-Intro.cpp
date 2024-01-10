// MERGE SORT EXPLANATION WITH EXAMPLE

// Certainly! Let's walk through an example of Merge Sort with a small list of numbers: [38, 27, 43, 3, 9, 82, 10].

// Initial List: [38, 27, 43, 3, 9, 82, 10]

// Divide:

// Split the list into two halves:

// Left half: [38, 27, 43]
// Right half: [3, 9, 82, 10]
// Continue dividing until each sub-list has only one element:

// [38], [27], [43], [3], [9], [82], [10]
// Conquer and Merge:

// Now, start merging the sub-lists back together in a sorted manner:

// Merge [38] and [27] to get [27, 38]
// Merge [43] and [3] to get [3, 43]
// Merge [9] and [82] to get [9, 82]
// Merge [10] into itself, as it's already sorted.
// The merged sub-lists are now: [27, 38], [3, 43], [9, 82], [10]

// Conquer and Merge (Again):

// Merge [27, 38] and [3, 43] to get [3, 27, 38, 43]

// Merge [9, 82] and [10] to get [9, 10, 82]

// The merged sub-lists are now: [3, 27, 38, 43], [9, 10, 82]

// Conquer and Merge (Final Step):

// Merge the remaining two sub-lists: [3, 9, 10, 27, 38, 43, 82]
// Result:

// The final merged and sorted list is [3, 9, 10, 27, 38, 43, 82].
// In each step, we divided the list into smaller sub-lists, sorted them individually, and then merged them back together. The key idea is to break the problem into smaller, more manageable parts, solve those, and then combine the solutions to form the final sorted list.