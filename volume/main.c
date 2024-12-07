#define putstr(s) {                                                            \
  asm (                                                                        \
    "movq $1, %%rax;"                                                          \
    "movq $1, %%rdi;"                                                          \
    "movq %0, %%rsi;"                                                          \
    "movq %1, %%rdx;"                                                          \
    "syscall"                                                                  \
    :                                                                          \
    : "r" ((long)(s)), "r" (sizeof(s))                                         \
    : "%rax", "%rdi", "%rsi", "%rdx"                                           \
  );                                                                           \
}

int main(void) {
  putstr("Hello World\n");
  return (0);
}
