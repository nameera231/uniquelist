#include "uniquelist.h"
#include <stdio.h>
#include <stdlib.h>

/// Initialize a new uniquelist
void uniquelist_init(uniquelist_t* s) {
     
      s->head = NULL;
      }

    /// Destroy a uniquelist
void uniquelist_destroy(uniquelist_t* s) {
     
      //check if empty list already
    if(s->head == NULL)
        {
          return;
        }
    else{
      //otherwise delete items
      while(s->head!=NULL)
      { element_t* pointer = s->head;
        pointer = s->head;
        s->head =pointer->next;
        free(pointer);
      }
}}

/// Add an element to a uniquelist, unless it's already in the uniquelist
void uniquelist_insert(uniquelist_t* s, int n) {

  element_t* pointer = s->head;
  //if list is already empty
  if(pointer == NULL)
  {
     element_t* new_item = (element_t*) malloc(sizeof(element_t));
     s->head = new_item;
     new_item->value = n;
     new_item->next = NULL;
  }
  else{
    while(pointer!=NULL){
      //we only add a new element if it is unique
      if(pointer->value == n)
      {
        return;
      }
      if(pointer->next==NULL)
      { 
        element_t* new_item = (element_t*) malloc(sizeof(element_t));
        pointer->next = new_item;
        new_item->value = n;
        new_item->next = NULL;
        break;
      }
      pointer = pointer->next;
    }
}}

/// Print all the numbers in a uniquelist
void uniquelist_print_all(uniquelist_t* s) {
  element_t* pointer = s->head;
  
  if(pointer!=NULL)
  {
        while(pointer!=NULL)
      {
        printf("%d ", pointer->value);
        pointer=pointer->next;
      }
      printf("\n");
  }
}
