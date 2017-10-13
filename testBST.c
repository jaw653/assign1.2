/*
 * Author: Jake Wachs
 * The purpose of this file is to test the BST, not the entire matilda thing
 */

#include <stdio.h>
#include "scanner.h"
#include "bst.h"
#include "string.h"

void displayPair(FILE *, void *, void *);


int main(void) {
  printf("Attempting to initialize...\n");
  BST *tree = newBST(displayPair, compareSTRING);
  printf("Tree successfully initialized.\n");

  printf("Attempting to insert into BST...\n");
  insertBST(tree, newSTRING("a"), newSTRING("10"));
  insertBST(tree, newSTRING("b"), newSTRING("20"));
  insertBST(tree, newSTRING("c"), newSTRING("30"));
  insertBST(tree, newSTRING("d"), newSTRING("40"));
  insertBST(tree, newSTRING("e"), newSTRING("50"));
  insertBST(tree, newSTRING("f"), newSTRING("60"));
  insertBST(tree, newSTRING("g"), newSTRING("70"));
  insertBST(tree, newSTRING("h"), newSTRING("80"));

  printf("Insert was successful.\n");

  printf("Attempting to display tree...\n");
  displayBST(stdout, tree);
  printf("\n");

  printf("Attempting to find node with key val a...\n");
  void *val = findBST(tree, newSTRING("a"));
  printf("Value of node with key a is: %s\n", getSTRING(val));

  printf("tree size is: %d\n", sizeBST(tree));
	return 0;
}

void displayPair(FILE *fp, void *key, void *value) {
  displaySTRING(fp, key);
  fprintf(fp, "=");
  displaySTRING(fp, value);
//  fprintf(fp, "\n");
}
