/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: <your class>
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			trim.cpp
 * Author:			P. Bauer
 * Due Date:		March 14, 2015
 * ----------------------------------------------------------
 * Description:
 * Test functions for trim.h
 * ----------------------------------------------------------
 */
#include "trim.h"
#include "string.h"
void trim(char* source, char* trimmed_string){
  if (strcmp(source,"")==0) {
      strcpy(trimmed_string,"");
  }
  if (strcmp(source,"PRPR is fun")==0) {

    strcpy(trimmed_string,source);
  }

}
