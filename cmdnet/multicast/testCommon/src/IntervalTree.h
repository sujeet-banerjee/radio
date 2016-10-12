/*
 * IntervalTree.h
 *
 *  Created on: Apr 29, 2016
 *      Author: banerjees
 */

#ifndef INTERVALTREE_H_
#define INTERVALTREE_H_

//#include<Print.h>
//#include <HardwareSerial.h>

template <class T>
class Interval
{
public:
    T data;

    /**
     * range: 0 to 86399
     */
    int start;

    /**
     * range: 0 to 86399
     */
    int end;

//    void print(Print& out)
//    {
//    	if(&data == nullptr)
//    	{
//    		out.println("[null]");
//    		return;
//    	}
//
//    	out.print("I: [");
//    	out.print(this->start);
//    	out.print(",");
//    	out.print(this->end);
//    	out.print("]");
//    }
};



template <class T>
class IntervalTree
{
private:
	Interval<T> *interval;
	int maxEnd;
	IntervalTree<T> *left;
	IntervalTree<T> *right;

	IntervalTree<T> *conflicting;
//	Print& out = Serial ;

public:
	IntervalTree(Interval<T> *rootInterval) {
		this->interval = rootInterval;
		this->maxEnd = rootInterval->end;
		this->left = nullptr;
		this->right = nullptr;
//		out = Serial;
	}

	IntervalTree() {
		this->interval = nullptr;
		this->maxEnd = -1;
		this->left = nullptr;
		this->right = nullptr;
//		out = Serial;
	}
//	virtual ~IntervalTree();

	bool isOverlapping(Interval<T> *i1, Interval<T> *i2)
	{
		return i1->start < i2->end && i2->start < i1->end;
	}

	IntervalTree<T> * getLeft()
	{
		return this->left;
	}

	IntervalTree<T> * getRight()
	{
		return this->right;
	}

	Interval<T> *getInterval()
	{
		return this->interval;
	}

	IntervalTree<T> * insert(IntervalTree<T> *root, Interval<T> *input, IntervalTree<T> *toBeConflictingNode)
	{
//		out.print(" [Insert] input node: ");
//		input->print(out);
//		out.println("");


		/*
		 * recursion base.
		 */
		if(root == nullptr)
		{
//			out.println(" [Insert] inserting now!");

			IntervalTree<T> *ret = new IntervalTree<T>(input);
			if(toBeConflictingNode!=nullptr)
			{
				toBeConflictingNode->conflicting = ret;
				ret->conflicting = toBeConflictingNode;
			}
			return ret;
		}
//		else
//		{
//			out.print(" [Insert] root: ");
//			root->interval->print(out);
//			out.println("");
//		}

		/*
		 * Binary search tree on input->start
		 */
		if(input->start < root->interval->start){
//			out.println(" [Insert] traveling left... ");
			root->left = this->insert(root->left, input, toBeConflictingNode);
		}else {
//			out.println(" [Insert] traveling right... ");
			root->right = this->insert(root->right, input, toBeConflictingNode);
		}

		/*
		 * Update the augmented info: maxEnd
		 */
//		out.print(maxEnd);
//		out.print("<-");
//		out.print(input->end);
		root->maxEnd = (root->maxEnd < input->end) ? input->end : root->maxEnd;
//		out.print(":");
//		out.println(maxEnd);
		return root;
	}


	IntervalTree<T> * findOverlapping(IntervalTree<T> *root, Interval<T> *input)
	{
		if(root == nullptr)
		{
//			out.println(" Tree is null, the parent was Leaf!");
			return nullptr;
		}

//		out.print(" Root: ");
//		root->interval->print(out);
//		out.println(root->maxEnd);

//		if(root->left != nullptr)
//		{
//			out.print(" Left: ");
//			root->left->interval->print(out);
//			out.println(root->left->maxEnd);
//		}
//		else
//		{
//			out.println(" Left is nil");
//		}

//		if(root->right != nullptr)
//		{
//			out.print(" Right: ");
//			root->right->interval->print(out);
//			out.println(root->right->maxEnd);
//		}
//		else
//		{
//			out.println(" Right is nil");
//		}

//		out.print(" Input Interval: ");
//		input->print(out);
//		out.println("");


		if(isOverlapping(root->interval, input))
		{
//			out.println(" [IntervalTree] Found match: Root and Input");
//			root->interval->print(out);
//			out.print("; input=>");
//			input->print(out);
			return root;
		}

		if(root->left == nullptr)
		{
//			out.println("Going Right, as left child is nil.");
			return this->findOverlapping(root->right, input);
		}

		if(root->right == nullptr)
		{
//			out.println("Going Left, as right child is nil.");
			return this->findOverlapping(root->left, input);
		}

//		out.print(input->start);
//		out.print(" <=? ");
//		out.println(root->left->maxEnd);

		if(input->start <= root->left->maxEnd)
		{
//			out.println("Going Left, as x.low <= left.maxEnd");
			return this->findOverlapping(root->left, input);
		}

//		out.println("Going Right");

		//else
		return this->findOverlapping(root->right, input);
	}

	IntervalTree<T> * insert(IntervalTree<T> *root, Interval<T> *input, bool forceful)
	{
		IntervalTree<T> *conflicting = this->findOverlapping(root, input);
		if(conflicting == nullptr)
			return this->insert(root, input, conflicting);

		IntervalTree<T> *ret = this->insert(root, input, conflicting);
		return ret;
	}


	inline IntervalTree<T> * turn(int bit)
	{
		return (bit==0) ? this->left : this->right;
	}

	IntervalTree<T> *getNode(char bitStr, int depth)
	{
		IntervalTree<T> * ret = this;
		for(int i=0, mask = 128 ; i< depth; i++)
		{
			if(ret == nullptr)
				break;

			(bitStr & mask) ? ret = ret->right : ret = ret->left;
			mask = mask >> 1;
		}

		return ret;
	}

};

#endif /* INTERVALTREE_H_ */
