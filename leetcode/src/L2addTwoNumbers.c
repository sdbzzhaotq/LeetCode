/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

#include"leetcode_functions.h"

int power4ten(int loop) {
    int ret = 1;
    for(int i=0;i<loop;i++) {
        ret = ret*10;
    }
    return ret;
}


int Node2Num(struct ListNode* Node) {
 	struct ListNode* p = Node;
 	int total = 0;
    int loop = 0;

 	if(Node != NULL) {
        do{
            total = (p->val)*power4ten(loop) + total;
            p = p->next;
            loop++;
        } while(p != NULL);
    }

    return total;
}

void display(struct ListNode* head) {
 	struct ListNode*p;
 	p = head;

 	if(head != NULL) {
        do{
            printf("val:%d next:%p\n",p->val,p->next);
            p = p->next;
        } while(p != NULL);
    }
}

struct ListNode* Num2Node(int num) {
    struct ListNode* node = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* p = node;
    while(num !=0 ) {
        p->val = num%10;
        num = num/10;
        if(0 != num) {
            struct ListNode* next = (struct ListNode*)malloc(sizeof(struct ListNode));   
            p->next = next;
        } else {
            p->next = NULL;
        }
        p = p->next;
    }

    return node;
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    int num1 = 0;
    int num2 = 0;
    num1 = Node2Num(l1);
    num2 = Node2Num(l2);
    int num3 = num1 + num2;
    struct ListNode* node = Num2Node(num3);
    return node;
}