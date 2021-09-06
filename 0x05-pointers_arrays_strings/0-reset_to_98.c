/*this program resets a memory location
* to 98
* resets the value n to 98
*void reset_to_98(int *n) - we use this function
* return 0
*/
void reset_to_98(int *n){
int i = 98;
int *n;
n = &i; /* store address of i in pointer variable*/
printf("Address of i variable: %x\n", &n);
/* address stored in pointer variable */
printf("Address stored in n variable: %x\n", i);
return 0;
}
