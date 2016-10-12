#include <Queue.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>



void printElement(Element<char> *chElm)
{
	printf("[%c]", chElm->data);
}


void printQueue(Queue<char>* q)
{
	if(q==nullptr)
		return;

	Element<char> *current = q->getTail();

	bool isFirst = true;
	while(current != nullptr)
	{
		printElement(current);
		if(!isFirst)
		{
			printf(" --> ");
			isFirst=false;
		}
		current = current->next;
	}

}

int main(int argc, char **argv)
{
	Queue<char> *chQ = new Queue<char>(30);

	chQ->enqueue(new Element<char>('A'));
	chQ->enqueue(new Element<char>('B'));
	chQ->enqueue(new Element<char>('C'));

	printf("HEAD: ");
	printElement(chQ->getHead());
	printf("\n");

	printf("TAIL: ");
	printElement(chQ->getTail());
	printf("\n");

	chQ->enqueue(new Element<char>('D'));
    chQ->enqueue(new Element<char>('E'));
    printQueue(chQ);

    Element<char> *deQueued = chQ->dequeue();
    printf("\nDeQueued: ");
    printElement(deQueued);

    deQueued = chQ->dequeue();
	printf("\nDeQueued: ");
	printElement(deQueued);

	printf("\nResulting Queue: ");
	printQueue(chQ);

    printf("\n");

}



