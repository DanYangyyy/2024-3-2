#pragma once
//#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>

#define N 100
typedef int SLDataType; 

//��̬˳���
//struct SeqList {
//	SLDataType arr[N];
//	int size;
//};

//��̬˳���
typedef struct SeqList {
	SLDataType *arr;
	int size;
	int capacity;
}SL;

//��ʼ��
void SLInit(SL* ps);
//����
void SLDestroy(SL* ps);
//��ӡ
void SLPrint(SL* ps);
//ͷ��
void SLPushFront(SL* ps, SLDataType x);
//β��
void SLPushBack(SL* ps, SLDataType x);
//ͷɾ
void SLPopFront(SL* ps);
//βɾ
void SLPopBack(SL* ps);
//ָ��λ��֮ǰ��������
void SLInsert(SL* sl, int pos, SLDataType x);
//ָ��λ��ɾ������
void SLErase(SL* sl, int pos);

