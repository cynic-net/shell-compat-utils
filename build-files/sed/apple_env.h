/*
 *  Apple build environment definitions that are not included in Apple's
 *  `text_cmds` repo.
 */

#define __FBSDID(x)  /**/

/* Strange Apple setlinebuf() has a return value. */
#include <stdio.h>      // needed for setlinebuf() function definition
#define setlinebuf(stream) (setlinebuf(stream),0)

