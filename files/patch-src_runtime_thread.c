--- src/runtime/thread.c.orig	2017-01-22 19:43:20 UTC
+++ src/runtime/thread.c
@@ -50,7 +50,7 @@
 
 #ifdef LISP_FEATURE_SB_THREAD
 
-#ifdef LISP_FEATURE_OPENBSD
+#if defined(LISP_FEATURE_OPENBSD) || defined(LISP_FEATURE_FREEBSD)
 #include <pthread_np.h>
 #endif
 
