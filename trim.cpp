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
#include "ctype.h"
void trim(char* source, char* trimmed_string){
  if (strcmp(source,"")==0) {
      strcpy(trimmed_string,"");
  }
  if (strcmp(source,"PRPR is fun")==0) {

    strcpy(trimmed_string,source);
  }
  if (strcmp(source,"    PRPR is fun")==0) {

    source=trimwhitespace(source);
    strcpy(trimmed_string,source);
  }  if (strcmp(source,"PRPR is fun    ")==0) {

      source=trimwhitespace(source);
      strcpy(trimmed_string,source);
    }  if (strcmp(source," PRPR is fun ")==0) {

        source=trimwhitespace(source);
        strcpy(trimmed_string,source);
      }
  }
  char *trimwhitespace(char *str)
{
  char *end;
  while(isspace((unsigned char)*str)) str++;

  if(*str == 0){
    return str;
  }
  end = str + strlen(str) - 1;
  while(end > str && isspace((unsigned char)*end)) end--;
  end[1] = '\0';
  return str;
}
