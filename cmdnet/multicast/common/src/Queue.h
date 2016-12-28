/*
 * controller.h
 *
 *  Created on: 27-Sep-2016
 *      Author: sujeet
 */

#ifndef SRC_QUEUE_H_
#define SRC_QUEUE_H_


template <class T>
class Element
{
public:
    T *data;
    Element<T>* next;
    Element(T *data)	{
		this->data = data;
		this->next = nullptr;
	};
    virtual ~Element(){
    	delete this->data;
    	delete this->next;
    }
};


template <class T>
class Queue
{
private:
    Element<T> *tail=nullptr, *head=nullptr;
    int count=0;
    int maxLength=30;

public:
    Queue(int maxLength) {
        this->maxLength = maxLength;
        this->count = 0;
    }

    Queue<T> * getHead()
    {
        return this->head;
    }

    Queue<T> * getTail()
    {
        return this->tail;
    }

    bool enqueue(Element<T> *elm)
    {
        if(count>=maxLength)
            return false;

        if(head==nullptr)
        {
            elm->next = nullptr;
            head = elm;
            count++;
        }
        else
        {
            head->next = elm;
            elm->next = nullptr;
            head = elm;
            count++;
        }

        if(tail==nullptr)
            tail = elm;

        return true;
    }

    Element<T> *dequeue()
	{
		if(count<=0)
			return nullptr;

		if(head==tail || head==nullptr || tail==nullptr)
			return nullptr;

		Element<T>* temp = tail;
		tail = tail->next;
		temp->next = nullptr;
		count--;
		return temp;
	}

    bool isEmpty()
    {
    	return this->count <= 0;
    }

    int size()
    {
    	return this->count;
    }
};


#endif /* SRC_QUEUE_H_ */
