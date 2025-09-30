# 📚 Stack in C++
## 🎯 Objective  
To explore and develop **Stack** operations in C++ using array-based implementation, while understanding its characteristics, operational mechanisms, and practical applications in computer science.
---
## 📚 Theoretical Foundation  
### Stack  
A **Stack** is a linear data structure following the **LIFO (Last In, First Out)** principle. The element added most recently is extracted first, analogous to a stack of plates where you can only add or remove from the top.  
- **Top** → references the most recently added element.  

### 🔑 Fundamental Properties of Stacks  
- **LIFO Mechanism**: Last insertion corresponds to first removal.  
- **Sequential Organization**: Elements maintain linear arrangement.  
- **Restricted Access**: Addition and removal exclusively at top position.  
- **Capacity Constraints**: Overflow occurs when capacity exceeded; underflow occurs when attempting removal from empty stack.  

### 🔄 Stack Variants  
- **Array-based Stack** → Fixed size implementation using arrays.  
- **Dynamic Stack** → Variable size implementation using linked lists.  
- **Double Stack** → Two stacks sharing single array space.  
---
## 📋 Algorithm for Stack
1. **Begin**  
2. Set `top = -1` and declare array `arr[MAX]`.  
3. Present menu containing options:  
   - 1 → Push operation  
   - 2 → Pop operation  
   - 3 → Display contents  
   - 4 → Peek top element  
   - 5 → Check if empty  
   - 6 → Check if full  
   - 7 → Calculate size  
   - 8 → Clear stack  
   - 9 → Exit program  

4. **Continue until choice = 9:**  
   - Accept user's selection.  

   **Option 1: Push**  
   - If `top == MAX - 1` → Display *Stack Overflow*.  
   - Otherwise:  
     - Advance `top` by 1.  
     - Store element at position `arr[top]`.  
     - Display success message.  

   **Option 2: Pop**  
   - If `top == -1` → Display *Stack Underflow*.  
   - Otherwise:  
     - Output element at `arr[top]`.  
     - Decrement `top` by 1.  

   **Option 3: Display**  
   - If `top == -1` → Display *Stack is empty*.  
   - Otherwise iterate from `top` downward to `0` and output elements.  

   **Option 4: Peek**  
   - If `top == -1` → Display *Stack is empty*.  
   - Otherwise output element at position `arr[top]`.  

   **Option 5: Check if Empty**  
   - If `top == -1` → Display *Stack is empty*.  
   - Otherwise Display *Stack is not empty*.  

   **Option 6: Check if Full**  
   - If `top == MAX - 1` → Display *Stack is full*.  
   - Otherwise Display *Stack is not full*.  

   **Option 7: Size**  
   - If `top == -1` → size = 0.  
   - Otherwise size = `top + 1`.  
   - Display calculated size.  

   **Option 8: Clear**  
   - Reinitialize `top = -1`.  
   - Display *Stack cleared*.  

   **Option 9: Exit**  
   - Display *Exiting...* and terminate execution.  

   **Invalid Input**  
   - Display *Invalid choice*.  

5. **Terminate**
---
## 🚀 Practical Applications of Stacks  
- **Expression evaluation** (postfix, prefix, infix conversion)  
- **Function call management** (recursion stack, activation records)  
- **Undo/Redo operations** in text editors and software applications  
- **Backtracking algorithms** (maze solving, N-Queens problem)  
- **Browser history navigation** (forward and backward buttons)  
- **Syntax parsing and compilation** (parentheses matching, compiler design)  
- **Memory management** (stack memory allocation)  
- **Depth-First Search (DFS)** in graph traversal  
---
## 🧠 Summary  
- Stacks are fundamental for organizing data in **sequential LIFO fashion**.  
- They provide efficient handling of nested and hierarchical processes.  
- This implementation covered:  
  - Push (adding elements at top).  
  - Pop (removing elements from top).  
  - Navigation and auxiliary operations (peek, size, isEmpty, isFull, clear).  
- These concepts establish the **groundwork for advanced applications** including recursive algorithms, expression parsing, and memory management systems.  
- Proficiency with stacks is essential for addressing **algorithmic challenges in recursion, backtracking, and compiler construction**.
