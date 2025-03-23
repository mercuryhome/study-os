1. p3_error_01.c

   - int execvp(const char *file, char *const argv[]) 函数传入的程序文件file（例子myargs[0])不存在;

     导致 execvp() 函数无法加载新程序 覆盖 进程内存。 子进程内存仍然是父进程 duplicate（复制）给子进程的

     代码和数据。子进程将继续运行 excevp()函数失败后语句。


2. p3_error_02.c

   在 p3_error_01.c 继续思考：


    - int execvp(const char *file, char *const argv[]) 函数传入的程序文件file（例子myargs[0])存在;

      但是传入程序 myargs[0] 需要的参数错误。比如：在 shell 执行 $wc no_file.c , 在 execvp（)函数传入参数：

      char * myargs[0] = strdup("wc");        // wc 程序文件存在，在/usr/bin/wc,且在$PATH可找到 wc
      char * myargs[1] = strdup("no_file.c"); // no_file.c 文件不存在
      char * myargs[2] = NULL;                //  传入参数结束

    提问：

    1. execvp()函数加载程序文件wc 覆盖了 子进程的原有内存吗？


    2. execvp()函数执行返回正常吗？


    3. execvp()函数后面的子进程语句会被执行吗？
    
