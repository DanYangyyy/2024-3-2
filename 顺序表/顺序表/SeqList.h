#pragma once
//#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>

#define N 100
typedef int SLDataType; 

//静态顺序表
//struct SeqList {
//	SLDataType arr[N];
//	int size;
//};

//动态顺序表
typedef struct SeqList {
	SLDataType *arr;
	int size;
	int capacity;
}SL;

//初始化
void SLInit(SL* ps);
//销毁
void SLDestroy(SL* ps);
//打印
void SLPrint(SL* ps);
//头插
void SLPushFront(SL* ps, SLDataType x);
//尾插
void SLPushBack(SL* ps, SLDataType x);
//头删
void SLPopFront(SL* ps);
//尾删
void SLPopBack(SL* ps);
//指定位置之前插入数据
void SLInsert(SL* sl, int pos, SLDataType x);
//指定位置删除数据
void SLErase(SL* sl, int pos);

