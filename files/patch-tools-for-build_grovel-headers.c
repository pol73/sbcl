--- tools-for-build/grovel-headers.c.orig	2017-01-22 19:43:20 UTC
+++ tools-for-build/grovel-headers.c
@@ -42,7 +42,7 @@
 #ifdef LISP_FEATURE_ANDROID
   #include <termios.h>
 #else
-  #include <sys/termios.h>
+  #include <termios.h>
   #include <langinfo.h>
 #endif
   #include <sys/time.h>
