--- storage/innobase/os/os0file.cc.orig	2022-02-10 02:15:07 UTC
+++ storage/innobase/os/os0file.cc
@@ -1303,8 +1303,9 @@ use_o_direct:
 		default:
 			break;
 		}
+  }
 # ifdef __linux__
-	} else if (type == OS_LOG_FILE && !log_sys.is_opened()) {
+   else if (type == OS_LOG_FILE && !log_sys.is_opened()) {
 		struct stat st;
 		char b[20 + sizeof "/sys/dev/block/" ":"
 		       "/../queue/physical_block_size"];
