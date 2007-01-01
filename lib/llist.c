/* vi: set sw=4 ts=4 :
 * llist.c - Linked list functions
 *
 * Linked list structures have a next pointer as their first element.
 */

#include "toys.h"

// Free all the elements of a linked list
// if freeit!=NULL call freeit() on each element before freeing it.

void llist_free(void *list, void (*freeit)(void *data))
{
	while (list) {
		void *pop = llist_pop(&list);
		if (freeit) freeit(pop);
	}
}

// Return the first item from the list, advancing the list (which must be called
// as &list)
void *llist_pop(void *list)
{
	// I'd use a void ** for the argument, and even accept the typecast in all
	// callers as documentation you need the &, except the stupid compiler
	// would then scream about type-punned pointers.  Screw it.
	void **llist = (void **)list;
	void **next = (void **)*llist;
	*llist = *next;

	return (void *)next;
}