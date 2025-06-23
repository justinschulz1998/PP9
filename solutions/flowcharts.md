graph TD
  A[Start: x] --> B[Initialize result = 1]
  B --> C{i = 1 to x?}
  C -- No --> D[Return result]
  C -- Yes --> E{i % 2 == 0?}
  E -- Yes --> F[result += i]
  E -- No --> G[result *= i]
  F --> H[result > 1000?]
  G --> H
  H -- Yes --> I[result -= 100]
  H -- No --> J[Increment i]
  I --> J
  J --> C


Graph 2 TD 
    A[Start] --> B[Set state = 0]
    B --> C[i = 0]
    C --> D{i < len?}
    D -- Yes --> E{arr[i] < 0?}
    E -- Yes --> F[state = -1]
    E -- No --> G{arr[i] == 0?}
    G -- Yes --> H[state = 0]
    G -- No --> I[state = 1]
    F --> J{state == 1?}
    H --> J
    I --> J
    J -- Yes --> K[Break]
    J -- No --> L[i++]
    L --> D
    D -- No --> M[switch(state)]
    M --> N{case 1?}
    N -- Yes --> O[Return true]
    N -- No --> P[Return false]
    O --> Q[End]
    P --> Q 
