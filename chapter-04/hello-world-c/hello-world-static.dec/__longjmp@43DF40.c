void __noreturn _longjmp(struct __jmp_buf_tag env[1], int val)
{
  ((void (__fastcall *)(struct __jmp_buf_tag *__attribute__((__org_arrdim(0,1))), int))_libc_arm_za_disable)(env, val);
}
