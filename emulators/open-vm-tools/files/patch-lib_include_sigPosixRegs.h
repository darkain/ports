--- lib/include/sigPosixRegs.h.orig	2021-05-31 05:24:34 UTC
+++ lib/include/sigPosixRegs.h
@@ -189,6 +189,8 @@ extern "C" {
 #define SC_R13(uc) ((unsigned long) (uc)->uc_mcontext.mc_r13)
 #define SC_R14(uc) ((unsigned long) (uc)->uc_mcontext.mc_r14)
 #define SC_R15(uc) ((unsigned long) (uc)->uc_mcontext.mc_r15)
+#elif defined(__aarch64__)
+#define SC_X(uc,n) ((unsigned long) (uc)->uc_mcontext.mc_gpregs.gp_x[n])
 #else
 #define SC_EAX(uc) ((unsigned long) (uc)->uc_mcontext.mc_eax)
 #define SC_EBX(uc) ((unsigned long) (uc)->uc_mcontext.mc_ebx)
