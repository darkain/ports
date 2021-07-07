--- sql/sql_select.cc.orig	2021-07-07 20:32:32 UTC
+++ sql/sql_select.cc
@@ -18420,7 +18420,7 @@ static bool make_json_valid_expr(TABLE *table, Field *
   Item *expr, *item_field;
 
   if (!table->expr_arena && table->init_expr_arena(thd->mem_root))
-    return NULL;
+    return FALSE;
 
   thd->set_n_backup_active_arena(table->expr_arena, &backup_arena);
   if ((item_field= new (thd->mem_root) Item_field(thd, field)) &&
