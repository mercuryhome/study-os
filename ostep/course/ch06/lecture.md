# ch06

lecture 2025.03.22

0. 程序的运行过程

 （1）父进程 fork() 创建子进程；
 
     - OS 在进程列表为子进程创建一个进程条目，分配一个 PID 号;

     - duplicate (复制）父进程虚拟内存空间(4G), 分配给子进程独享；

 (2) 子进程运行execvp()函数, OS 将execvp()函数指定路径程序文件（包括代码和数据）从硬盘加载至子进程内存；

     覆盖了从父进程 duplicte 的内存内容。

     - OS 将 CPU 程序计数器（PC）指向程序入口指令内存地址（程序main() 函数入口地址） 

     - CPU 运行程序指令

     - CPU 运行程序 "return 返回码" 返回调用函数；或者exit(返回码) 函数退出。（僵尸进程：进程已退出，等待 OS 收尸）

     - [重要] execvp()函数运行:

        - 走读代码：~/workspace/study-os/ostep/course/ch06/p3.c,  p3_error.c

        - 正常返回或退出， OS 不执行execvp()后的指令；

        - 发生异常，OS 执行execvp()后的指令 -- 调用 perror()函数打印异常信息


(3) 父进程运行 wait()函数，等待子进程运行结束


(4) 父进程负责 fork - 创建子进程 和 wait等待子进程结束；子进程负责调用 execvp 执行其他程序，是工具人（worker）；


(5) vim 使用技巧

. vim 多 tab

:tab first
:tab last
:tab next


