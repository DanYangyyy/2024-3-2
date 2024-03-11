#include"SeqList.h"
//初始化
void SLInit(SL* ps)
{
	ps->arr = NULL;
	ps->capacity = ps->size = 0;
}

void SLCheckCapacity(SL* ps) {
	if (ps->arr == ps->capacity) {
		int newCapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
		SLDataType* tmp = (SLDataType*)realloc(ps->arr, newCapacity * sizeof(SLDataType));
		if (tmp == NULL) {
			perror("realloc fail！");
			exit(1);
		}
		//扩容成功
		ps->arr = tmp;
		ps->capacity = newCapacity;
	}
}

//头插
void SLPushFront(SL* ps, SLDataType x)
{
	assert(ps);
	//判断是否扩容
	SLCheckCapacity(ps);
	for (int i = ps->size; i > 0; i--)
	{
		ps->arr[i] = ps->arr[i - 1];
	}
	ps->arr[0] = x;
	ps->size++;
}
//尾插
void SLPushBack(SL* ps, SLDataType x)
{
	assert(ps);
	//空间不够，扩容
	SLCheckCapacity(ps);
	//空间足够，直接插入
	ps->arr[ps->size] = x;
	ps->size++;
}
//头删
void SLPopFront(SL* ps) 
{
	assert(ps);
	assert(ps->size);

	for(int i = 0;i < ps->size-1;i++) 
	{
		ps->arr[i] = ps->arr[i+1];
	}
	ps->size--;
}
//尾删
void SLPopBack(SL* ps)
{
	assert(ps);
	assert(ps->size);

	ps->size--;
}
//指定位置之前插入数据
void SLInsert(SL* ps, int pos, SLDataType x)
{
	assert(ps);
	assert(pos >= 0 && pos <= ps->size);

	SLCheckCapacity(ps);

	for (int i = ps->size; i >= pos; i--)
	{
		ps->arr[i + 1] = ps->arr[i];
	}
	ps->arr[pos] = x;
	ps->size++;
}
//指定位置删除数据
void SLErase(SL* ps, int pos)
{
	assert(ps);
	assert(pos >= 0 && pos < ps->size);

	for (int i = pos; i < ps->size-1;i++)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;
}
void SLPrint(SL* ps)
{
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	printf("\n");
}