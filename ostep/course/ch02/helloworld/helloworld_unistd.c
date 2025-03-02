#include <unistd.h>
#include <string.h>

int main() {
    const char *message = "Hello, World!\n";
    size_t length = strlen(message);

    // linux 为每个进程自动打开3个文件描述符
    // 0 - 标准输入
    // 1 - 标准输出 
    // 2 - 标准错误 
    write(1, message, length);

    return 0;
}
