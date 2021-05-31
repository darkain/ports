--- lib/misc/hostinfoPosix.c.orig	2021-05-31 05:38:54 UTC
+++ lib/misc/hostinfoPosix.c
@@ -140,11 +140,13 @@
 #define SYSTEM_BITNESS_64_SUN "amd64"
 #define SYSTEM_BITNESS_64_LINUX "x86_64"
 #define SYSTEM_BITNESS_64_ARM_LINUX "aarch64"
+#define SYSTEM_BITNESS_64_ARM_FREEBSD "arm64"
 #define SYSTEM_BITNESS_MAXLEN \
    MAX(sizeof SYSTEM_BITNESS_32, \
    MAX(sizeof SYSTEM_BITNESS_64_SUN, \
    MAX(sizeof SYSTEM_BITNESS_64_LINUX, \
-       sizeof SYSTEM_BITNESS_64_ARM_LINUX)))
+   MAX(sizeof SYSTEM_BITNESS_64_ARM_LINUX, \
+       sizeof SYSTEM_BITNESS_64_ARM_FREEBSD))))
 
 struct hostinfoOSVersion {
    int   hostinfoOSVersion[4];
@@ -496,7 +498,9 @@ Hostinfo_GetSystemBitness(void)
    if (strcmp(buf, SYSTEM_BITNESS_32) == 0) {
       return 32;
    } else if (strcmp(buf, SYSTEM_BITNESS_64_SUN) == 0 ||
-              strcmp(buf, SYSTEM_BITNESS_64_LINUX) == 0) {
+              strcmp(buf, SYSTEM_BITNESS_64_LINUX) == 0 ||
+              strcmp(buf, SYSTEM_BITNESS_64_ARM_LINUX) == 0 ||
+              strcmp(buf, SYSTEM_BITNESS_64_ARM_FREEBSD) == 0) {
       return 64;
    }
 
