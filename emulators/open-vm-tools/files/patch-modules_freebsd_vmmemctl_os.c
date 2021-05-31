--- modules/freebsd/vmmemctl/os.c.orig	2021-05-31 05:27:00 UTC
+++ modules/freebsd/vmmemctl/os.c
@@ -256,6 +256,10 @@ static __inline__ unsigned long os_ffz(unsigned long w
    __asm__("bsfq %1,%0"
            :"=r" (word)
            :"r" (~word));
+#elif defined(__aarch64__)
+   __asm__("rbit %0, %1; clz %0,%0"
+           :"=r" (word)
+           :"r" (~word));
 #else
    __asm__("bsfl %1,%0"
            :"=r" (word)
