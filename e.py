import os

# Dictionary containing the source code for each question
# Logic is implemented using short variable names (i, j, n, etc.)
# Tabs (\t) are used for spacing and indentation as requested.

files_content = {
    "q34.c": r"""//q34.c
#include <stdio.h>

int main() {
    int i, j;
    // 3x3 grid of asterisks
    for(i = 1; i <= 3; i++) {
        for(j = 1; j <= 3; j++) {
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}
""",
    "q35.c": r"""//q35.c
#include <stdio.h>

int main() {
    int i, j;
    // 3x3 grid, columns are 1, 2, 3
    for(i = 1; i <= 3; i++) {
        for(j = 1; j <= 3; j++) {
            printf("%d\t", j);
        }
        printf("\n");
    }
    return 0;
}
""",
    "q36.c": r"""//q36.c
#include <stdio.h>

int main() {
    int i, j;
    // 3x3 grid, rows are 1, 2, 3
    for(i = 1; i <= 3; i++) {
        for(j = 1; j <= 3; j++) {
            printf("%d\t", i);
        }
        printf("\n");
    }
    return 0;
}
""",
    "q37.c": r"""//q37.c
#include <stdio.h>

int main() {
    int i, j;
    // 3x3 grid, columns descending 3, 2, 1
    for(i = 1; i <= 3; i++) {
        for(j = 3; j >= 1; j--) {
            printf("%d\t", j);
        }
        printf("\n");
    }
    return 0;
}
""",
    "q38.c": r"""//q38.c
#include <stdio.h>

int main() {
    int i, j;
    // 3x3 grid, rows descending 3, 2, 1
    for(i = 3; i >= 1; i--) {
        for(j = 1; j <= 3; j++) {
            printf("%d\t", i);
        }
        printf("\n");
    }
    return 0;
}
""",
    "q39.c": r"""//q39.c
#include <stdio.h>

int main() {
    int i, j;
    // Right triangle of asterisks
    for(i = 1; i <= 3; i++) {
        for(j = 1; j <= i; j++) {
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}
""",
    "q40.c": r"""//q40.c
#include <stdio.h>

int main() {
    int i, j;
    // Right triangle of numbers (increasing)
    for(i = 1; i <= 3; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d\t", j);
        }
        printf("\n");
    }
    return 0;
}
""",
    "q41.c": r"""//q41.c
#include <stdio.h>

int main() {
    int i, j;
    // Right triangle of numbers (row value)
    for(i = 1; i <= 3; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d\t", i);
        }
        printf("\n");
    }
    return 0;
}
""",
    "q42.c": r"""//q42.c
#include <stdio.h>

int main() {
    int i, j;
    // Right triangle, starting at 3 and decreasing
    for(i = 1; i <= 3; i++) {
        for(j = 0; j < i; j++) {
            printf("%d\t", 3 - j);
        }
        printf("\n");
    }
    return 0;
}
""",
    "q43.c": r"""//q43.c
#include <stdio.h>

int main() {
    int i, j;
    // Right triangle, rows are 3, then 2 2, then 1 1 1
    for(i = 3; i >= 1; i--) {
        for(j = 1; j <= (4 - i); j++) {
            printf("%d\t", i);
        }
        printf("\n");
    }
    return 0;
}
""",
    "q44.c": r"""//q44.c
#include <stdio.h>

int main() {
    int i, j, s;
    // Pyramid of asterisks
    for(i = 1; i <= 4; i++) {
        // Print leading tab spaces
        for(s = 1; s <= 4 - i; s++) {
            printf("\t");
        }
        // Print asterisks
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}
""",
    "q45.c": r"""//q45.c
#include <stdio.h>

int main() {
    int i, j, s;
    // Pyramid Palindrome: 1, 121, 12321...
    for(i = 1; i <= 4; i++) {
        // Print leading tab spaces
        for(s = 1; s <= 4 - i; s++) {
            printf("\t");
        }
        // Print increasing numbers
        for(j = 1; j <= i; j++) {
            printf("%d\t", j);
        }
        // Print decreasing numbers
        for(j = i - 1; j >= 1; j--) {
            printf("%d\t", j);
        }
        printf("\n");
    }
    return 0;
}
""",
    "q46.c": r"""//q46.c
#include <stdio.h>

int main() {
    int i, j, s;
    // Pyramid Palindrome descending from 5: 5, 545, 54345...
    for(i = 5; i >= 1; i--) {
        // Print leading tab spaces (rows go 5->1, so spaces increase as i decreases? No, i is value)
        // Let's refactor: loop k from 0 to 4.
        int row = 5 - i + 1; // row 1, 2, 3, 4, 5
        
        for(s = 1; s <= 5 - row; s++) {
            printf("\t");
        }
        
        // Print decreasing part (5 down to i)
        for(j = 5; j >= i; j--) {
            printf("%d\t", j);
        }
        
        // Print increasing part (i+1 up to 5)
        for(j = i + 1; j <= 5; j++) {
            printf("%d\t", j);
        }
        printf("\n");
    }
    return 0;
}
""",
    "q47.c": r"""//q47.c
#include <stdio.h>

int main() {
    int i, j;
    // Binary Triangle 1, 01, 101...
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= i; j++) {
            // If sum of row and col index is even, print 1, else 0
            if((i + j) % 2 == 0) {
                printf("1\t");
            } else {
                printf("0\t");
            }
        }
        printf("\n");
    }
    return 0;
}
"""
}

# Create files in the current directory
for filename, content in files_content.items():
    with open(filename, "w") as f:
        f.write(content)
    print(f"Created {filename}")

print("\nAll files (q34.c - q47.c) have been generated successfully.")