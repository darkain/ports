--- lib/hgfsServer/hgfsServerLinux.c.orig	2021-05-31 05:21:39 UTC
+++ lib/hgfsServer/hgfsServerLinux.c
@@ -2565,7 +2565,7 @@ HgfsStatToFileAttr(struct stat *stats,       // IN: st
        attr->specialPerms, attr->ownerPerms, attr->groupPerms,
        attr->otherPerms, attr->size);
 #ifdef __FreeBSD__
-#   if !defined(VM_X86_64) && __FreeBSD_version >= 500043
+#   if !defined(VM_X86_64) && !defined(VM_ARM_64) && __FreeBSD_version >= 500043
 #      define FMTTIMET ""
 #   else
 #      define FMTTIMET "l"
