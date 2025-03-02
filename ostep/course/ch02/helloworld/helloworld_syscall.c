#include <unistd.h>
#include <sys/syscall.h>
#include <string.h>

int main() {
    const char *message = "Hello, World!\n";
    size_t length = strlen(message);

    // 使用 syscall 直接调用 SYS_write
    // 参数1: 文件描述符 (1 表示标准输出)
    // 参数2: 要写入的数据的指针
    // 参数3: 要写入的字节数
    syscall(SYS_write, 1, message, length);

    return 0;
}
