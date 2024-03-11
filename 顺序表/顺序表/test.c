#include"SeqList.h"

void slTest01()
{
	SL sl;
	SLInit(&sl);

	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);
	SLPushBack(&sl, 5);
	SLPrint(&sl);

	/*SLInsert(&sl,3,100);
	SLPrint(&sl);*/

	/*SLErase(&sl, 3);
	SLPrint(&sl);*/
	SLErase(&sl, 0);
	SLPrint(&sl);

	/*SLPushFront(&sl, 6);
	SLPushFront(&sl, 7);
	SLPushFront(&sl, 8);
	SLPrint(&sl);*/

	/*SLPopBack(&sl);
	SLPopBack(&sl);
	SLPrint(&sl);

	SLPopFront(&sl);
	SLPrint(&sl);*/

}

int main()
{
	slTest01();
	return 0;
}