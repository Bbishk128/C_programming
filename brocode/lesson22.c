#include <stdio.h>

// Break    == Break out of loop (STOP)
// Continue == Skip current cycle of loop and continue (SKIP)

int main()
{

    for (int i = 1; i <= 10; i++)
    {
        if (i == 4)
        {
            continue; // 4-г алгасаад 1-с 10 хүртэл хэвэлнэ
            // break; // 123-г хэвлэнэ. 4 хүрээд зогсоно гэсэн үг
        }

        printf("%d", i);
    }
    return 0;
}