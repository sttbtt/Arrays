typedef struct LinkedListItem {
  char **str_arr;
  struct LinkedListItem *ptr;
} LinkedListItem;

int main() {
  
  LinkedListItem *ll_1 = malloc(sizeof(LinkedListItem));
  
  char *static_str = "STATIC STRING";
  
  char **str_arr = malloc(5 * sizeof(char *));
  
  ll_1->str_arr = str_arr;
  
  char *str1 = malloc(4 * sizeof(char));
  str1[0] = 'L';
  str1[1] = 'L';
  str1[2] = '1';
  str1[3] = 0;
  
  char *str2 = malloc(6 * sizeof(char));
  str2[0] = 'L';
  str2[1] = 'L';
  str2[2] = '2';
  str2[3] = '-';
  str2[4] = '-';
  str2[5] = 0;
  
  str_arr[0] = str1;
  str_arr[1] = str2;
  str_arr[1] = static_str;
  
  printf("Size str: %d\n", sizeof(str_arr));
  
  printf("Second string: %s\n", ll_1->str_arr[1]);
  
  free(str2);
  free(str1);
  
  free(str_arr);
  free(ll_1);
  
  // LinkedListItem *ll_1 = malloc(sizeof(LinkedListItem));
  
  // LinkedListItem *ll_2 = malloc(sizeof(LinkedListItem));
  
  // ll_1->str = str;
  // ll_1->str = ll_2;
  // ll_2->str = str2;
  
  return 0;
}


