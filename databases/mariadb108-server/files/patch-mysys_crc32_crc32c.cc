--- mysys/crc32/crc32c.cc.orig	2022-02-07 07:47:38 UTC
+++ mysys/crc32/crc32c.cc
@@ -528,6 +528,21 @@ static int arch_ppc_probe(void) {
 
   return arch_ppc_crc32;
 }
+#elif __FreeBSD__
+#include <machine/cpu.h>
+#include <sys/auxv.h>
+#include <sys/elf_common.h>
+static int arch_ppc_probe(void) {
+  unsigned long cpufeatures;
+  arch_ppc_crc32 = 0;
+
+#if defined(__powerpc64__)
+  elf_aux_info(AT_HWCAP2, &cpufeatures, sizeof(cpufeatures));
+  if (cpufeatures & PPC_FEATURE2_HAS_VEC_CRYPTO) arch_ppc_crc32 = 1;
+#endif  /* __powerpc64__ */
+
+  return arch_ppc_crc32;
+}
 #endif  // __linux__
 #endif
 
