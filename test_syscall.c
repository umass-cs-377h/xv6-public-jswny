#include "types.h"
#include "stat.h"
#include "user.h"

int main(void) {
    char str[] = "Testing syscall...\n";
    printf(1, "%s", str);
    printf(1, "The size of my address space is %d bytes\n", getmysize());
    exit();
}