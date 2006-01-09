/**********************************************************************
 It is a simple main function that uses unsigned short int and 
 returns 0.
**********************************************************************/

/* The file begin.h is included if compiler flag -DBEGINCODE is used */
#ifdef BEGINCODE
#include "begin.h"
#endif

int main() {
  unsigned short int usi;

  usi=0x5555; 
  /* After usi is 21845 */
  
  /* Before usi is 21845 */ usi=0xAAAA; 
  /* After usi is 43690 */
  
  /* Before usi is 43690 */ usi=0x0000; 
  /* After usi is 0 */

  /* Before usi is 0 */ usi=0xFFFF; 
  /* After usi is 65535 */
  
  /* Before usi is 65535 */ usi=0x8000; 
  /* After usi is 32768 */

  /* Before usi is 32768 */ usi=0x0001;
  /* After usi is 1 */

  /* Before usi is 1 */ usi=0x7FFF; 
  /* After usi is 32767 */
  
  /* Before usi is 32767 */ usi=0xFFFE;
  /* After usi is 65534 */

  /* Before usi is 65534 */ return 0; 
  /* Return 0 */
}

/* The file end.h is included if compiler flag -DENDCODE is used */
#ifdef ENDCODE
#include "end.h"
#endif
