--- lib/guestApp/guestApp.c.orig	2021-01-13 22:58:07 UTC
+++ lib/guestApp/guestApp.c
@@ -63,7 +63,7 @@
 #elif defined __APPLE__
 #   define GUESTAPP_TOOLS_INSTALL_PATH "/Library/Application Support/VMware Tools"
 #else
-#   define GUESTAPP_TOOLS_INSTALL_PATH "/etc/vmware-tools"
+#   define GUESTAPP_TOOLS_INSTALL_PATH "/usr/local/share/vmware-tools"
 #endif
 
 #if defined _WIN32
