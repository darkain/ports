--- include/m_ctype.h.orig	2021-07-07 21:19:03 UTC
+++ include/m_ctype.h
@@ -34,6 +34,9 @@ enum loglevel {
 extern "C" {
 #endif
 
+#ifndef ulong
+#define ulong unsigned long
+#endif
 
 #define MY_CS_NAME_SIZE			32
 #define MY_CS_CTYPE_TABLE_SIZE		257
