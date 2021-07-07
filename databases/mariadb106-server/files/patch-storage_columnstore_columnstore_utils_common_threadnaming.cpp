--- storage/columnstore/columnstore/utils/common/threadnaming.cpp.orig	2021-07-07 21:29:57 UTC
+++ storage/columnstore/columnstore/utils/common/threadnaming.cpp
@@ -15,12 +15,26 @@
    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
    MA 02110-1301, USA. */
 
+#ifdef __linux__
 #include <sys/prctl.h>
+#endif
 
+#ifdef __FreeBSD__
+#include <sys/types.h>
+#include <unistd.h>
+#endif
+
+
 namespace utils
 {
     void setThreadName(const char *threadName)
     {
+#ifdef __linux__
         prctl(PR_SET_NAME, threadName, 0, 0, 0);
+#endif
+
+#ifdef __FreeBSD__
+        setproctitle("%s", threadName);
+#endif
     }
 } // end of namespace
