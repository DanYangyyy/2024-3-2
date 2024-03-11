#include"SeqList.h"
//��ʼ��
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
			perror("realloc fail��");
			exit(1);
		}
		//���ݳɹ�
		ps->arr = tmp;
		ps->capacity = newCapacity;
	}
}

//ͷ��
void SLPushFront(SL* ps, SLDataType x)
{
	assert(ps);
	//�ж��Ƿ�����
	SLCheckCapacity(ps);
	for (int i = ps->size; i > 0; i--)
	{
		ps->arr[i] = ps->arr[i - 1];
	}
	ps->arr[0] = x;
	ps->size++;
}
//β��
void SLPushBack(SL* ps, SLDataType x)
{
	assert(ps);
	//�ռ䲻��������
	SLCheckCapacity(ps);
	//�ռ��㹻��ֱ�Ӳ���
	ps->arr[ps->size] = x;
	ps->size++;
}
//ͷɾ
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
//βɾ
void SLPopBack(SL* ps)
{
	assert(ps);
	assert(ps->size);

	ps->size--;
}
//ָ��λ��֮ǰ��������
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
//ָ��λ��ɾ������
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