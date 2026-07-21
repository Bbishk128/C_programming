#include <stdio.h>

// While loop    ==  Хэрэв нөхцөл үнэн бол доорх кодыг нөхцөл худал болтол хий гэсэн үг. 
//                   Зөвхөн нөхцөл үнэн үед л хэрэглэгддэг ба худал бол loop-лүү орохгүй
// Do-While loop ==  Нөхцөлөө сүүлд нь шалгадаг.
//                   Кодоо нэг удаа хий тэгээд нөхцөлөө шалга гэж байгаа юм


int main()
{
    int num = 0;

    // While loop: 

    while (num <= 0)
    {
        printf("Enter number that is greater than 0: ");
        scanf("%d", &num);
    }

    //  Do-While loop:

    do{
        printf("Enter number that is greater than 0: ");
        scanf("%d", &num);
    }while(num<=0);

    return 0;
}