--- vmblockmounter/vmblockmounter.c.orig	2021-05-31 05:26:16 UTC
+++ vmblockmounter/vmblockmounter.c
@@ -129,7 +129,7 @@ int
 main(int argc,          // IN
      char *argv[])      // IN
 {
-   char c;
+   int c;
    int i;
    int result = EXIT_FAILURE;
    int mntRes = -1;
